CC=gcc
CFLAGS=
DEPS = keys.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

CardKB: CardKB.o func.o
	 $(CC) -o CardKB CardKB.o func.o
