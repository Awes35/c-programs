CC = gcc
CFLAGS = -g -Wall
RM = rm -ri

default: mainInsert

mainSelect: sort.o arrayUtil.o mainSelect.o
	$(CC) $(CFLAGS) -o mainSelect mainSelect.o sort.o arrayUtil.o
mainInsert: sort.o arrayUtil.o mainInsert.o
	$(CC) $(CFLAGS) -o mainInsert mainInsert.o sort.o arrayUtil.o
mainSelect.o: sort.h arrayUtil.h mainSelect.c
	$(CC) $(CFLAGS) -c mainSelect.c
mainInsert.o: sort.h arrayUtil.h mainInsert.c
	$(CC) $(CFLAGS) -c mainInsert.c
sort.o: sort.c sort.h
	$(CC) $(CFLAGS) -c sort.c
arrayUtil.o: arrayUtil.c arrayUtil.h
	$(CC) $(CFLAGS) -c arrayUtil.c
clean:
	$(RM) mainInsert *.o *~
