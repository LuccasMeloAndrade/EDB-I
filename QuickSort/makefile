all: Main.o particionar.o quicksort.o
	gcc -Wall Main.o particionar.o quicksort.o -o quick

Main.o: Main.c cabecalho.h
	gcc -Wall -c Main.c 

quicksort.o: quicksort.c cabecalho.h
	gcc -Wall -c quicksort.c

particionar.o: particionar.c cabecalho.h
	gcc -Wall -c particionar.c

run: all
	./quick

clean:
	rm -f *.o quick
