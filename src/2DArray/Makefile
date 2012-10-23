BUILD = ../../build
CPP = g++
CFLAGS = -Wall -Wextra -Werror 

main: twoDArray_test.cpp TwoDArray.o
	$(CPP) $(CFLAGS) -o $(BUILD)/TwoDArray twoDArray_test.cpp TwoDArray.o

TwoDArray.o: TwoDArray.h TwoDArray.cpp
	$(CPP) $(CFLAGS) -c TwoDArray.cpp

clean:
	rm -f *.o;
	rm -f $(BUILD)/TwoDArray;
	rm -f *~;
