#编译项目
all:main
main:main.o sort.o
	gcc -o main main.o sort.o
main.o:main.c
	gcc -c main.c
sort.o:sort.c
	gcc -c sort.c
clean:
	rm *.o main
