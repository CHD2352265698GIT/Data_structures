#编译项目
all:main
main:Data_structures.o Linked_list.o
	gcc -o main Data_structures.o Linked_list.o
Data_structures.o:Data_structures.c
	gcc -c Data_structures.c
Linked_list.o:Linked_list.c
	gcc -c Linked_list.c
clean:
	rm *.o main
