BUILD = ../../build
CPP = g++
CFLAGS = -Wall -Wextra -Werror 

main: SparseArray_test.cpp SparseArray.o Node.o
	  $(CPP) $(CFLAGS) -o $(BUILD)/SparseArray SparseArray_test.cpp SparseArray.o Node.o

SparseArray.o: SparseArray.h SparseArray.cpp
	  $(CPP) $(CFLAGS) -c SparseArray.cpp

Node.o: Node.h Node.cpp
	  $(CPP) $(CFLAGS) -c Node.cpp

clean:
	  rm -f *.o;
	  rm -f $(BUILD)/SparseArray;
	  rm -f main;
	  rm -f *~;
