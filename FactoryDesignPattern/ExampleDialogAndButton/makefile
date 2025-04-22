#Compiler and Flags
CXX = g++
CXX_FLAGS = -std=c++17 -Wall

#Source, Build and Log Directory
SRCDIR = src
BUILDDIR = build
LOGDIR = logs

#Source and object files
SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(SRC))

#Target executable
TARGET = myprogram

#clean the directory for fresh build
clean:
	rm -rf $(BUILDDIR) $(TARGET)

#create build directory
$(BUILDDIR): 
	mkdir -p $(BUILDDIR)

#create log directory
$(LOGDIR):
	mkdir -p $(LOGDIR)

#compile
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp | $(BUILDDIR)
	$(CXX) $(CXX_FLAGS) -c $< -o $@

#link
$(TARGET): $(OBJ)
	$(CXX) $(CXX_FLAGS) -o $@ $^

#Default rule
all: $(TARGET) $(LOGDIR)
	./$(TARGET)

