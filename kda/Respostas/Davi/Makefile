all:
	cd Respostas/Davi
	gcc *.c -o main

teste:
	gcc jogador.c registro.c servidor.c -c
	gcc main.c registro.o jogador.o servidor.o -o main
	./main <entrada.txt
