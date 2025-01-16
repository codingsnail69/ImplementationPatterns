# Compiler und Flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2 -march=armv8-a -mtune=native

# Ziel-Binärdatei
TARGET = main

# Objektdateien
OBJS = main.o publisher.o subscriber.o

# Default-Ziel
all: $(TARGET)

# Regel zum Erstellen des Ziels
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Regel für main.o
main.o: main.cpp publisher.hpp subscriber.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

# Regel für publisher.o
publisher.o: publisher.hpp
	$(CXX) $(CXXFLAGS) -c publisher.cpp

# Regel für subscriber.o
subscriber.o: subscriber.hpp
	$(CXX) $(CXXFLAGS) -c subscriber.cpp

# Clean-Regel
clean:
	rm -f $(OBJS) $(TARGET)

# Phony-Ziele
.PHONY: all clean
