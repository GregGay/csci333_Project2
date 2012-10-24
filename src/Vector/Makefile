BUILD = ../../build
CPP = g++
CFLAGS = -Wall -Wextra -Werror 

main: VectorTwoDArray_test.cpp VectorTwoDArray.o
	$(CPP) $(CFLAGS) -o $(BUILD)/VectorTwoDArray VectorTwoDArray_test.cpp VectorTwoDArray.o

VectorTwoDArray.o: VectorTwoDArray.h VectorTwoDArray.cpp
	$(CPP) $(CFLAGS) -c VectorTwoDArray.cpp

clean:
	rm -f *.o;
	rm -f $(BUILD)/VectorTwoDArray;
	rm -f main;
	rm -f *~;
