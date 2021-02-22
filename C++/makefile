CC=g++
DEPS=header/LinkedList.h

%.o: %.c $ (DEPS)
	$(CC) -c -o $@ $< $(-I)

llTest: llTest.o
	$(CC) -o llTest llTest.cpp
