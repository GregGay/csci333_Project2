BUILD = ../build
CPP = g++
CFLAGS = - Wall -Wextra -Werror

all: 2DArray Vector SparseArray

2DArray: 2DArray/TwoDArray.cpp 2DArray/TwoDArray.o
	  cd 2DArray; $(MAKE)

Vector: Vector/VectorTwoDArray.cpp Vector/VectorTwoDArray.o
	  cd Vector; $(MAKE)

SparseArray: SparseArray/SparseArray.cpp SparseArray/SparseArray.o
	  cd SparseArray; $(MAKE)

clean:
	  rm -f *.o;
