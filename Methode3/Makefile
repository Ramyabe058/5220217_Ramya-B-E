# target name: dependencies
# <1tab> commands to generate target

CC = gcc
CFLAGS = -Wall -Wextra
OBJS = main.o sum.o sub.o prod.o divide.o
TARGET = program

#creating your own variable
SRCS = main.c sum.c sub.c divide.c prod.c
OBJS = main.o sum.o sub.o divide.o prod.o

object.o : $(SRCS)  #or ${SRCS} this will also work
	gcc $^ -c

all: $(OBJS)        #or ${OBJS}
	gcc $^ -o $@
    #Instead of writing all.out we can write $@
run: all
	./all

.PHONY: clean
clean:
	del /Q *.o *.out all

#Special Variable:
# 1. $^: Consider all the file present in the dependencies, seperated by space i,e(gcc $^ -c , gcc $^ -o all.out)
# 2. $<: Consider only 1st file  present in the dependencies, seperated by space i,e(gcc $< -c, gcc $< -o all.out)
# 3. $@: Representing the target / evaluates to all (executable file beging generated named as all)
