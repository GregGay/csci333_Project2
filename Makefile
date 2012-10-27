BUILD = build
TEST = test
LIB = lib
SRC = src
CPP = g++
CFLAGS = -Wall -Wextra -Werror

all: clean $(BUILD)/main $(BUILD)/TwoDArrayTest

$(BUILD)/main:
	  cd $(SRC); $(MAKE)

$(BUILD)/TwoDArrayTest:
	  cd $(TEST); $(MAKE)

clean:
	  cd $(SRC); $(MAKE) clean
	  cd $(TEST); $(MAKE) clean
