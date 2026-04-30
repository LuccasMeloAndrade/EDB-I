all: preencher.o imprimir.o mergesort.o merge.o main.o
	gcc preencher.o imprimir.o mergesort.o merge.o main.o -o merge

main.o: main.c cabecalho.h
	gcc -Wall -c main.c 

merge.o: merge.c cabecalho.h
	gcc -Wall -c merge.c 

imprimir.o: imprimir.c cabecalho.h
	gcc -Wall -c imprimir.c 
	
preencher.o: preencher.c cabecalho.h
	gcc -Wall -c preencher.c 

run: all
	./merge

clean:
	rm -f *.o merge