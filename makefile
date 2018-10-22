All:	Sieve.o
	gcc Sieve.o

Sieve.o: Sieve.c 
	gcc -c Sieve.c

run:
	./a.out

clean:
	rm *.o
	rm *.out
