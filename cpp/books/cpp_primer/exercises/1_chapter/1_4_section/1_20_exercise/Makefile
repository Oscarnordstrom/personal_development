CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11

# Change the following line to match the name of your main C++ file
MAIN = main.cpp

# Change the following line to the name of the compiled executable
EXECUTABLE = program

# List any additional source files here
SOURCES = 

# List any additional header files here
HEADERS = Sales_item.h

# Default target: compile, link, and run the executable
all: $(EXECUTABLE)
	./$(EXECUTABLE)

$(EXECUTABLE): $(MAIN) $(SOURCES) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(MAIN) $(SOURCES) -o $(EXECUTABLE)

# Clean up the compiled files
clean:
	rm -f $(EXECUTABLE)

.PHONY: all clean
