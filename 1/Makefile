CC=clang
CCC=clang
CXXFLAGS= -Wall -O3 

AR = ar
ARFLAGS = -rc
LIBS = -lm 
LIBPATH = -L/usr/local/lib 
INCPATH = -I/usr/local/include -I./

##########################################################

EXECUTABLE = aed

OBJECTS = arq.o main.o

all:  $(EXECUTABLE)
	@echo OK

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CXXFLAGS) -o $(EXECUTABLE) $(OBJECTS) $(LIBPATH) $(LIBS) 
	  
##########################################################
main.o:	main.c
	$(CC) $(CXXFLAGS)  -c  main.c  $(INCPATH) 
	
arq.o: arq.c
	$(CC) $(CXXFLAGS)  -c  arq.c  $(INCPATH)
##########################################################

clean:
	rm -f *.o
	rm -f $(EXECUTABLE)
	rm -f $(LIBRARY)
	
cleanfiles:
	echo  > pendentes.txt
	echo > alunos.txt	
##########################################################
leakcheck:	build
	valgrind --leak-check=yes --show-reachable=yes ./$(EXECUTABLE)
