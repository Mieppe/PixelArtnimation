BUILD ?= ./build
SRC ?= ./src

all : $(BUILD)/main.o pixelartnimation.out

pixelartnimation.out : $(BUILD)/main.o
	g++ -o pixelartnimation.out $(BUILD)/main.o

$(BUILD)/main.o : $(SRC)/main.cpp
	g++ -c -Wall $(SRC)/main.cpp -o $(BUILD)/main.o

clean :
	rm $(BUILD)/*.o

fullclean : 
	rm $(BUILD)/*.o *.out