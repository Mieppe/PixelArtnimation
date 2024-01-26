INC_DIR = include
SRC_DIR = src
OBJ_DIR = obj
CFLAGS = -c -Wall -I $(INC_DIR)

OBJS = $(OBJ_DIR)/main.o $(OBJ_DIR)/utils.o

all: pixelartnimation.out

pixelartnimation.out : $(OBJS)
	g++ -o pixelartnimation.out $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	g++ $(CFLAGS) -c $< -o $@

clean :
	rm $(OBJS)

fullclean : 
	rm $(OBJS) *.out