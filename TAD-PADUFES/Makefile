all:
	gcc *.c -o main

bibli:
	gcc -c data.c
	ar rcs libdata.a data.o
	gcc main.c -o main -L. -ldata

clean:
	rm -f *.o main	