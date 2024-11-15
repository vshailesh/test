# Compiler
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Target executable
TARGET = test_student_program

# Source files
SRC = Course.cpp Student.cpp TestStudent.cpp TestStudentMain.cpp

# Header files
HEADERS = Course.h Student.h TestStudent.h

# Object files
OBJ = $(SRC:.cpp=.o)

# Default rule to build the target
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Rule to build each object file
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJ) $(TARGET)
