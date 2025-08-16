# target name: dependencies
# <1tab> commands to generate target

CC = gcc
CFLAGS = -Wall -Wextra
OBJS = main.o sum.o sub.o prod.o divide.o
TARGET = program

object.o : main.c sum.c sub.c divide.c prod.c
	gcc $^ -c

all: main.o sum.o sub.o divide.o prod.o 
	gcc $^ -o $@
    #Instead of writing all.out we can write $@
run: all
	./all.out

.PHONY: clean
clean:
	del /Q *.o *.out 

#Special Variable:
# 1. $^: Consider all the file present in the dependencies, seperated by space i,e(gcc $^ -c , gcc $^ -o all.out)
# 2. $<: Consider only 1st file  present in the dependencies, seperated by space i,e(gcc $< -c, gcc $< -o all.out)
# 3. $@: Representing the target / evaluates to all (executable file beging generated named as all)
