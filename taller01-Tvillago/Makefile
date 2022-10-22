#TODO: Add targers to compile the program
GCC=gcc

programa: functions.o main.o
	$(GCC) -o programa functions.o main.o

functions.o: functions.c functions.h
	$(GCC) -c functions.c
main.o: main.c functions.h
	$(GCC) -c main.c


.PHONY: clean
clean:
	rm -f *.o programa




