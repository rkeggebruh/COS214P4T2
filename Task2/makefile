CXX = g++
CXXFLAGS = -std=c++20 -static

# List your source files
SRCS = main.cpp ORM.cpp DatabaseAdapter.cpp
#   

# Generate the list of object files from source files
OBJS = $(SRCS:.cpp=.o)

# The name of the final executable
EXECUTABLE = main

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

run: all
	./$(EXECUTABLE)

clean:
	rm -f $(OBJS) $(EXECUTABLE)
