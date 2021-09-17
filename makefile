a.out: main.o rate.o
	gcc *.o
main.o: rate.h taxID.h worker.h main.c
	gcc -c main.c
rate.o: rate.h rate.c
	gcc -c rate.c
clean:
	rm a.out
	rm *.o
