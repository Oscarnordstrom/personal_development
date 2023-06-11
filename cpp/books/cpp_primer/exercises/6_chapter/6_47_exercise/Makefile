CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++20
DEBUG_FLAGS = -D NDEBUG
RELEASE_DIR = release
DEBUG_DIR = debug
EXECUTABLE = program.out
MAIN = main.cpp
SOURCES =
HEADERS =

# Default target: compile, link, and run the executable
all: release

release: CXXFLAGS += -O2
release: format $(RELEASE_DIR)/$(EXECUTABLE)
	./$(RELEASE_DIR)/$(EXECUTABLE)

$(RELEASE_DIR)/$(EXECUTABLE): $(MAIN) $(SOURCES) $(HEADERS)
	@mkdir -p $(RELEASE_DIR)
	$(CXX) $(CXXFLAGS) $(MAIN) $(SOURCES) -o $@

debug: CXXFLAGS += -g $(DEBUG_FLAGS)
debug: format $(DEBUG_DIR)/$(EXECUTABLE)
	./$(DEBUG_DIR)/$(EXECUTABLE)

$(DEBUG_DIR)/$(EXECUTABLE): $(MAIN) $(SOURCES) $(HEADERS)
	@mkdir -p $(DEBUG_DIR)
	$(CXX) $(CXXFLAGS) $(MAIN) $(SOURCES) -o $@

# Target to run clang-format on source files
format:
	clang-format -i $(MAIN) $(SOURCES) $(HEADERS)

# Clean up the compiled files
clean:
	rm -rf $(RELEASE_DIR) $(DEBUG_DIR)

.PHONY: all clean format
