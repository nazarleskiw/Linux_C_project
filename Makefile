CFLAGS=-pthread -g -Wpedantic -Wall -pedantic-errors 

all:	1konsola.out 2argument.out 3pipe.out 4jajko.out 5Netlink.out 6network.out module

apps:   1konsola.out 2argument.out 3pipe.out 4jajko.out 5Netlink.out 6network.out

1konsola.out:	1konsola.o functions.o
	gcc $(CFLAGS)   ./compiled/1konsola.o ./compiled/functions.o -o ./exec/1konsola.out
	 

2argument.out:	2argument.o functions.o
	gcc $(CFLAGS)   ./compiled/2argument.o ./compiled/functions.o -o ./exec/2argument.out -lm
	

3pipe.out:	3pipe.o functions.o
	gcc $(CFLAGS)   ./compiled/3pipe.o ./compiled/functions.o -o ./exec/3pipe.out
 

4jajko.out:	4jajko.o functions.o
	gcc $(CFLAGS)   ./compiled/4jajko.o ./compiled/functions.o -o ./exec/4jajko.out

5Netlink.out:	5Netlink.o functions.o
	gcc $(CFLAGS)   ./compiled/5Netlink.o ./compiled/functions.o -o ./exec/5Netlink.out

6network.out:	6network.o functions.o
	gcc $(CFLAGS)   ./compiled/6network.o ./compiled/functions.o -o ./exec/6network.out
	
1konsola.o:	1konsola.c functions.h
	@echo Program No.1 build konsola
	gcc $(CFLAGS)  -c program1.c -o ./compiled/1konsola.o

2argument.o: 2argument.c functions.h
	@echo Program No.2 build argument
	gcc $(CFLAGS)  -c program2.c -o ./compiled/2argument.o -lm

3pipe.o: 3pipe.c functions.h
	@echo Program No.3 build pipe
	gcc $(CFLAGS)  -c program3.c -o ./compiled/3pipe.o 
	
4jajko.o: 4jajko.c functions.h
	@echo Program No.4 build egg
	gcc $(CFLAGS)  -c program4.c -o ./compiled/4jajko.o

5Netlink.o:	5Netlink.c functions.h
	@echo Program No.5 build netlink
	gcc $(CFLAGS)  -c program5.c -o ./compiled/5Netlink.o

6network.o:	6network.c functions.h
	@echo Program No.6 build network
	gcc  -c program6.c -o ./compiled/6network.o 
	
functions.o: functions.c functions.h
	@echo Functions file build
	gcc $(CFLAGS) -c functions.c -o ./compiled/functions.o 

run:
	@echo Program No.1 start
	sudo ./exec/1konsola.out

cleanapps:
	rm -v ./compiled/*.o 
	rm -v ./exec/*.out


	
