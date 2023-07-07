CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++20

# Change the following line to match the name of your main C++ file
MAIN = main.cpp

# Change the following line to the name of the compiled executable
EXECUTABLE = program.out

# List any additional source files here
SOURCES = TextQuery.cpp QueryResult.cpp Utilities.cpp

# List any additional header files here
HEADERS = TextQuery.h QueryResult.h Utilities.h

# Default target: compile, link, and run the executable
all: format $(EXECUTABLE)
	./$(EXECUTABLE)

$(EXECUTABLE): $(MAIN) $(SOURCES) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(MAIN) $(SOURCES) -o $(EXECUTABLE)

# Target to run clang-format on source files
format:
	clang-format -i $(MAIN) $(SOURCES) $(HEADERS)

# Clean up the compiled files
clean:
	rm -f $(EXECUTABLE)

.PHONY: all clean format
