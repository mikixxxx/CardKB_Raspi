/*
 * helper.c
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
#include "CardKB.h"
#include <time.h>
#include <linux/uinput.h>
#include <stdio.h>
#include <unistd.h>

void emit(int fd, int type, int code, int val)
{
   struct input_event ie;

   ie.type = type;
   ie.code = code;
   ie.value = val;
   /* timestamp values below are ignored */
   ie.time.tv_sec = 0;
   ie.time.tv_usec = 0;

   write(fd, &ie, sizeof(ie));
}


void sleep_ms(int millis)
{
   struct timespec ts;
    ts.tv_sec = millis / 1000;
    ts.tv_nsec = (millis % 1000) * 1000000;
    nanosleep(&ts, NULL);
}

int key_press(char key)
{

	
	switch(key)
	{
		case 0x1B:
		 emit(file_udev,EV_KEY,KEY_ESC,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_ESC,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x31:
		 emit(file_udev,EV_KEY,KEY_1,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_1,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x32:
		 emit(file_udev,EV_KEY,KEY_2,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_2,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x33:
		 emit(file_udev,EV_KEY,KEY_3,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_3,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x34:
		 emit(file_udev,EV_KEY,KEY_4,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_4,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x35:
		 emit(file_udev,EV_KEY,KEY_5,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_5,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x36:
		 emit(file_udev,EV_KEY,KEY_6,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_6,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x37:
		 emit(file_udev,EV_KEY,KEY_7,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_7,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x38:
		 emit(file_udev,EV_KEY,KEY_8,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_8,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x39:
		 emit(file_udev,EV_KEY,KEY_9,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_9,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x30:
		 emit(file_udev,EV_KEY,KEY_0,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_0,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x08:
		 emit(file_udev,EV_KEY,KEY_BACKSPACE,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_BACKSPACE,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x09:
		 emit(file_udev,EV_KEY,KEY_TAB,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_TAB,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x71:
		 emit(file_udev,EV_KEY,KEY_Q,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_Q,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x77:
		 emit(file_udev,EV_KEY,KEY_W,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_W,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x65:
		 emit(file_udev,EV_KEY,KEY_E,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_E,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x72:
		 emit(file_udev,EV_KEY,KEY_R,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_R,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x74:
		 emit(file_udev,EV_KEY,KEY_T,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_T,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x79:
		 emit(file_udev,EV_KEY,KEY_Y,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_Y,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x75:
		 emit(file_udev,EV_KEY,KEY_U,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_U,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x69:
		 emit(file_udev,EV_KEY,KEY_I,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_I,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x6F:
		 emit(file_udev,EV_KEY,KEY_O,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_O,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x70:
		 emit(file_udev,EV_KEY,KEY_P,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_P,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x61:
		 emit(file_udev,EV_KEY,KEY_A,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_A,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x73:
		 emit(file_udev,EV_KEY,KEY_S,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_S,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x64:
		 emit(file_udev,EV_KEY,KEY_D,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_D,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x66:
		 emit(file_udev,EV_KEY,KEY_F,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_F,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x67:
		 emit(file_udev,EV_KEY,KEY_G,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_G,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x68:
		 emit(file_udev,EV_KEY,KEY_H,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_H,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x6A:
		 emit(file_udev,EV_KEY,KEY_J,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_J,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x6B:
		 emit(file_udev,EV_KEY,KEY_K,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_K,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x6C:
		 emit(file_udev,EV_KEY,KEY_L,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_L,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x0D:
		 emit(file_udev,EV_KEY,KEY_ENTER,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_ENTER,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x7A:
		 emit(file_udev,EV_KEY,KEY_Z,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_Z,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x78:
		 emit(file_udev,EV_KEY,KEY_X,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_X,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x63:
		 emit(file_udev,EV_KEY,KEY_C,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_C,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x76:
		 emit(file_udev,EV_KEY,KEY_V,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_V,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x62:
		 emit(file_udev,EV_KEY,KEY_B,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_B,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x6E:
		 emit(file_udev,EV_KEY,KEY_N,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_N,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x6D:
		 emit(file_udev,EV_KEY,KEY_M,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_M,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x2C:
		 emit(file_udev,EV_KEY,KEY_COMMA,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_COMMA,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x2E:
		 emit(file_udev,EV_KEY,KEY_DOT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_DOT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x20:
		 emit(file_udev,EV_KEY,KEY_SPACE,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_SPACE,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0xB4:
		 emit(file_udev,EV_KEY,KEY_LEFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_LEFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0xB5:
		 emit(file_udev,EV_KEY,KEY_UP,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_UP,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0xB6:
		 emit(file_udev,EV_KEY,KEY_DOWN,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_DOWN,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0xB7:
		 emit(file_udev,EV_KEY,KEY_RIGHT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_RIGHT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x21:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_1,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_1,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x40:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_2,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_2,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x23:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_3,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_3,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x24:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_4,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_4,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x25:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_5,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_5,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x5E:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_6,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_6,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x26:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_7,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_7,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x2A:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_8,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_8,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x28:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_9,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_9,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x29:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_0,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_0,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x7B:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_LEFTBRACE,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_LEFTBRACE,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x7D:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_RIGHTBRACE,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_RIGHTBRACE,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x5B:
		 emit(file_udev,EV_KEY,KEY_LEFTBRACE,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_LEFTBRACE,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x5D:
		 emit(file_udev,EV_KEY,KEY_RIGHTBRACE,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_RIGHTBRACE,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x2F:
		 emit(file_udev,EV_KEY,KEY_SLASH,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_SLASH,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x5C:
		 emit(file_udev,EV_KEY,KEY_BACKSLASH,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_BACKSLASH,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x27:
		 emit(file_udev,EV_KEY,KEY_APOSTROPHE,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_APOSTROPHE,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x7C:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_BACKSLASH,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_BACKSLASH,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x7E:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_GRAVE,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_GRAVE,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x22:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_APOSTROPHE,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_APOSTROPHE,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x3A:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_SEMICOLON,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_SEMICOLON,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x2B:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_EQUAL,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_EQUAL,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x5F:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_MINUS,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_MINUS,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x3F:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_SLASH,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_SLASH,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x3C:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_COMMA,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_COMMA,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x3E:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_DOT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_DOT,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x3B:
		 emit(file_udev,EV_KEY,KEY_SEMICOLON,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_SEMICOLON,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x60:
		 emit(file_udev,EV_KEY,KEY_GRAVE,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_GRAVE,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x2D:
		 emit(file_udev,EV_KEY,KEY_MINUS,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_MINUS,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x3D:
		 emit(file_udev,EV_KEY,KEY_EQUAL,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_EQUAL,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		/*
		case 0x5C:
		 emit(file_udev,EV_KEY,KEY_BACKSLASH,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_BACKSLASH,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		*/
		case 0x51:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_Q,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_Q,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x57:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_W,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_W,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x45:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_E,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_E,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x52:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_R,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_R,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x54:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_T,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_T,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		// KLAVESA Y NEBO Z ?
		case 0x59:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_Y,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_Y,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x55:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_U,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_U,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x49:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_I,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_I,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x4F:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_O,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_O,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x50:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_P,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_P,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x41:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_A,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_A,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x53:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_S,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_S,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x44:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_D,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_D,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x46:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_F,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_F,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x47:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_G,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_G,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x48:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_H,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_H,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x4A:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_J,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_J,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x4B:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_K,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_K,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x4C:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_L,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_L,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x5A:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_Z,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_Z,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x58:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_X,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_X,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x43:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_C,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_C,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x56:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_V,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_V,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x42:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_B,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_B,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x4E:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_N,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_N,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
		
		case 0x4D:
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 emit(file_udev,EV_KEY,KEY_M,1);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		 sleep_ms(1);
		 emit(file_udev,EV_KEY,KEY_M,0);
		 emit(file_udev,EV_KEY,KEY_LEFTSHIFT,0);
		 emit(file_udev,EV_SYN,SYN_REPORT,0);
		break;
	}
}
