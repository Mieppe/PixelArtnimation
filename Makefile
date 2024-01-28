INC_DIR = include 
SRC_DIR = src
OBJ_DIR = obj
CFLAGS = -c -Wall -I $(INC_DIR) -I /usr/include/opencv4
LIBS = -lopencv_core -lopencv_videoio -lopencv_highgui
EXE = pixelartnimation.out

# OBJS = $(OBJ_DIR)/main.o $(OBJ_DIR)/utils.o
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(wildcard $(SRC_DIR)/*.cpp))

all: $(EXE)

$(EXE) : $(OBJS)
	g++ -o $(EXE) $(OBJS) $(LIBS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	g++ $(CFLAGS) -c $< -o $@ $ 

clean :
	rm $(OBJS)

fullclean : clean
	rm $(EXE)