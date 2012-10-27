BUILD = ../build
CPP = g++
CFLAGS = - Wall -Wextra -Werror

all: clean TwoDArray Vector SparseArray

TwoDArray: TwoDArray/TwoDArray.cpp TwoDArray/TwoDArray.o
	  cd TwoDArray; $(MAKE)

Vector: Vector/VectorTwoDArray.cpp Vector/VectorTwoDArray.o
	  cd Vector; $(MAKE)

SparseArray: SparseArray/SparseArray.cpp SparseArray/SparseArray.o
	  cd SparseArray; $(MAKE)

clean:
	  cd TwoDArray; $(MAKE) clean
	  cd Vector; $(MAKE) clean
	  cd SparseArray; $(MAKE) clean
