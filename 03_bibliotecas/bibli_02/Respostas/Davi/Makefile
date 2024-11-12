all:
	gcc -c main.c matrix_utils.c
	gcc main.o matrix_utils.o -o main
	./main <entrada.txt >saidaMy.txt

clean:
	rm -f *.o main
