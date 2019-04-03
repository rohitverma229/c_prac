output: addition.o substract.o multiplecation.o division.o main.o
	gcc addition.o substract.o multiplecation.o division.o main.o -o output
addition.o: addition.c 
	gcc -c addition.c
substract.o: substract.c
	gcc -c substract.c
multiplecation.o: multiplecation.c
	gcc -c multiplecation.c
division.o: division.c
	gcc -c division.c
main.o: main.c
	gcc -c main.c
run:
	./output

clean:
	rm -f *.o output

