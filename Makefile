# Compiler and flags
CXX = g++
CXXFLAGS = -I./include -std=c++17 -Wall -Wextra

# Target executable
TARGET = project_manager

# Source and header files
SRC_DIR = ./src
INCLUDE_DIR = ./include
SRCS = $(wildcard $(SRC_DIR)/*.cpp) main.cpp
OBJS = $(SRCS:.cpp=.o)

# Rule to make the final executable
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Rule for compiling .cpp files into .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule to remove object files and executable
clean:
	rm -f $(SRC_DIR)/*.o $(TARGET) main.o
