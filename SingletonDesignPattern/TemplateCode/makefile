# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall

# Source, Build and Log directory
SRCDIR = src
OBJDIR = build
LOGDIR = logs

# Source and object files
SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRC))

# Target executable
TARGET = myprogram

# Clean build and executable
clean:
	rm -rf $(OBJDIR) $(TARGET)

# Create the build directory if it doesn't exist
$(OBJDIR):
	mkdir -p $(OBJDIR)

#create log directory
$(LOGDIR):
	mkdir -p $(LOGDIR)

# Rule to compile .cpp in src/ to .o in build/
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Link the final executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Default rule
all: $(TARGET) $(LOGDIR)
	./$(TARGET)
