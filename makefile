# Variables
CXX = g++
CXXFLAGS = -Wall -std=c++17 -Iinclude
LDFLAGS = -lraylib -lm
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin
TARGET = $(BIN_DIR)/lowpowerpcgame

# Find all .cpp source files in src/
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)

# Generate object file names in obj/ from source files
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SOURCES))

# Default target
all: $(TARGET)

# Link the final executable
$(TARGET): $(OBJECTS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(OBJECTS) -o $(TARGET) $(LDFLAGS)

# Compile .cpp files into .o object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

# Optional: run the program
run: all
	./$(TARGET)
