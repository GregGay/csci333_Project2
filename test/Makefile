BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a
GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include
CPP = g++
CFLAGS = -Wall -Wextra -Werror

TWODARRAY = $(SRC)/TwoDArray
VECTOR = $(SRC)/Vector
SPARSEARRAY = $(SRC)/SparseArray
NODE = $(SRC)/SparseArray

twoDA_test: TwoDArray.cpp $(TWODARRAY)/TwoDArray.o $(VECTOR)/VectorTwoDArray.o $(SPARSEARRAY)/SparseArray.o $(NODE)/Node.o $(GTEST_MAINA)
	  $(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o twoDA_test TwoDArray.cpp $(TWODARRAY)/TwoDArray.o $(VECTOR)/VectorTwoDArray.o $(SPARSEARRAY)/SparseArray.o $(NODE)/Node.o $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	  cd $(GTEST)/make; make

clean:
	  rm -f twoDA_test
	  rm -f $(GTEST_MAINA)
	  cd $(GTEST)/make; $(MAKE) clean
