all: main.o funcaoSelec.o imprimir.o
	gcc main.o funcaoSelec.o imprimir.o -o selec

main.o: main.c cabecalho.h
	gcc -Wall -c main.c 

funcaoSelec.o: funcaoSelec.c cabecalho.h
	gcc -Wall -c funcaoSelec.c 

imprimir.o: imprimir.c cabecalho.h
	gcc -Wall -c imprimir.c 
	
run: all
	./selec

clean:
	rm -f *.o selec