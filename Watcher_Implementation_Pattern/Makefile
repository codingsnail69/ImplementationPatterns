# Compiler
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

# Zielprogramm
TARGET = main

# Objektdateien
OBJECTS = main.o subject.o specific_subject.o specific_watcher.o

# Standardziel
all: $(TARGET)

# Ziel: Kompiliere das ausführbare Programm
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Kompilierungsregeln für die einzelnen Objektdateien
main.o: main.cpp subject.hpp specific_subject.hpp watcher.hpp specific_watcher.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

subject.o: subject.cpp subject.hpp watcher.hpp
	$(CXX) $(CXXFLAGS) -c subject.cpp

specific_subject.o: specific_subject.cpp specific_subject.hpp subject.hpp
	$(CXX) $(CXXFLAGS) -c specific_subject.cpp

specific_watcher.o: specific_watcher.cpp specific_watcher.hpp watcher.hpp
	$(CXX) $(CXXFLAGS) -c specific_watcher.cpp

# Clean: Lösche alle erzeugten Dateien
clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean