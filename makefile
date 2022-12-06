
all: main

main: main.c my_mat.c
	gcc -Wall -o main main.c my_mat.c