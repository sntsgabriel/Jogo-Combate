TARGET = jogo-combate
SRC_DIR = src
INC_DIR = include
BUILD_DIR = build

CXX = g++
CXXFLAGS = -Wall -I$(INC_DIR)

SRC = $(SRC_DIR)/main.cpp $(SRC_DIR)/functions.cpp
OBJ = $(BUILD_DIR)/main.o $(BUILD_DIR)/functions.o

# Detecta o sistema operacional
ifeq ($(OS),Windows_NT)
    MKDIR = if not exist $(BUILD_DIR) mkdir $(BUILD_DIR)
    RM = rmdir /S /Q $(BUILD_DIR)
    EXEC = $(BUILD_DIR)/$(TARGET).exe
else
    MKDIR = mkdir -p $(BUILD_DIR)
    RM = rm -rf $(BUILD_DIR)
    EXEC = $(BUILD_DIR)/$(TARGET)
endif

$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(MKDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM)

run: $(EXEC)
	$(EXEC)
