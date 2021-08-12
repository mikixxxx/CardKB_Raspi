/*
 * klavesnice.c
 * 
 * Copyright 2021 Michal <michal@michal-ntb>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include "func.h"
#include "keys.h"
#include "CardKB.h"
#include <unistd.h>				//Needed for I2C port
#include <fcntl.h>				//Needed for I2C port
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>			//Needed for I2C port
#include <linux/i2c-dev.h>		//Needed for I2C port
#include <time.h>
#include <linux/uinput.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

int file_i2c;



void close_udev(void)
{
	ioctl(file_udev, UI_DEV_DESTROY);
	close(file_udev);
}
int open_udev(void)
{
	struct uinput_setup usetup;
	
	file_udev = open("/dev/uinput",O_WRONLY | O_NONBLOCK);
	ioctl(file_udev,UI_SET_EVBIT,EV_KEY);
	for(int i = 0; i < (sizeof(keys) / sizeof(int));i++)
	{
		ioctl(file_udev,UI_SET_KEYBIT,keys[i]);
	}
	memset(&usetup, 0, sizeof(usetup));
	usetup.id.bustype = BUS_USB;
	usetup.id.vendor = 0x1234;
	usetup.id.product = 0x5678;
	strcpy(usetup.name, "cardKB keyboard");
	
	ioctl(file_udev,UI_DEV_SETUP,&usetup);
	ioctl(file_udev,UI_DEV_CREATE);
	
	sleep(1);

	
	return 0;
}

int close_i2c(void)
{
	close(file_i2c);
}
int open_i2c(void)
{
		 if((file_i2c = open("/dev/i2c-1",O_RDWR|O_NONBLOCK))<0)
		 {
			 perror("Failed to open i2c bus!");
			 return 1;
		 }
		 
		 int addr = 0x5f;
		 if(ioctl(file_i2c,I2C_SLAVE,addr)<0)
		 {
			 perror("Failed to acquire bus access and/or talk to slave");
			 return 1;
		 }
		 
}
	
char get_key(void)
	{
		unsigned char c = 0;
		
		 unsigned char buffer[10];
		 memset(buffer,0,sizeof(buffer));
		 
		 int lenght = 1;
		 read(file_i2c,buffer,lenght);
		 if(buffer[0] > 0)
		 {
			 c = buffer[0];
			
			 return c; 
		 }
		 
		return c;
	}
	
int main(int argc, char **argv)
{
  if(open_i2c() == 1)
  {
	  perror("open_i2c() == 1");
	  return 1;
  }
  open_udev();
 
   while(1)
   {
	char key = get_key();
	if(key != 0)
	{
		key_press(key);
	}
	sleep_ms(10);
   }
   
	close_i2c();
	close_udev();
	printf("cardKB exit...");
	
   
  return 0;
}

