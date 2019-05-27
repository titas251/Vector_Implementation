all:	main.c vector.c vector.h tipas.h
	gcc -o 1 main.c vector.c vector.h tipas.h -I.
	./1
