all: selectionSort.o funcaoSelec.o imprimir.o
	gcc selectionSort.o funcaoSelec.o imprimir.o -o selec

selectionSort.o: selectionSort.c cabecalho.h
	gcc -Wall -c selectionSort.c 

funcaoSelec.o: funcaoSelec.c cabecalho.h
	gcc -Wall -c funcaoSelec.c 

imprimir.o: imprimir.c cabecalho.h
	gcc -Wall -c imprimir.c 
	
run: all
	./selec

clean:
	rm -f *.o selec