# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall

# Source folder and build folder
SRCDIR = src
OBJDIR = build

# Source and object files
SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRC))

# Target executable
TARGET = myprogram

# Default rule
all: $(TARGET)
	./$(TARGET)

# Link the final executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to compile .cpp in src/ to .o in build/
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create the build directory if it doesn't exist
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Clean build and executable
clean:
	rm -rf $(OBJDIR) $(TARGET)
