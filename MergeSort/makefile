all: preencher.o imprimir.o mergesort.o merge.o mergeSort.o
	gcc preencher.o imprimir.o mergesort.o merge.o mergeSort.o -o merge

mergeSort.o: mergeSort.c cabecalho.h
	gcc -Wall -c mergeSort.c 

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