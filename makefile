test : main.c 
	gcc -c main.c
	gcc -o test.out main.o
	./test.out
