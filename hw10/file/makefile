
CC          = gcc
CLINKER     = gcc
CCC         = g++
CCLINKER    = $(CCC)
INCLUDE_DIR = 
CFLAGS      = $(INCLUDE_DIR)
CCFLAGS     = $(CFLAGS)
OPTFLAGS    = -g
LIB_PATH    =
LIB_LIST    = -lm
LIBS        = $(LIB_PATH) $(LIB_LIST)

EXEC        = arraysort
objects     = sort.o main.o

default: $(EXEC)

$(EXEC): $(objects)
	g++ -g -o $(EXEC) $(objects)

sort.o : sort.cc sort.h
	g++ -c sort.cc -o sort.o -w

main.o : main.cc sort.h
	g++ -c main.cc -o main.o

clean :
	rm *.o
	rm $(EXEC)


