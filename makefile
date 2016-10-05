all: lab1 num leap

lab1: lab1.o
	gcc lab1.o -o lab1

lab1.o: lab1.c
	gcc -c lab1.c

num: num.o MMMProgram.o
	gcc num.o MMMProgram.o -o num

num.o: num.c MMMProgram.h
	gcc -c num.c

leap: leap.o
	gcc leap.o -o leap

leap.o: leap.c
	gcc -c leap.c

MMMProgram.o: MMMProgram.c MMMProgram.h
	gcc -c MMMProgram.c

clean:
	rm -f lab1.o lab1 num.o num leap.o leap MMMProgram.o MMMProgram
