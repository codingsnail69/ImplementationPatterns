# Compiler
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

# Targets
TARGET = main
OBJECTS = main.o scheduler.o befehl_ADD.o befehl.o

# Build-Target
all: $(TARGET)

# Ziel: Erzeuge die ausführbare Datei
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Kompilierungsregeln für Objektdateien
main.o: main.cpp scheduler.hpp befehl_ADD.hpp befehl.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

scheduler.o: scheduler.cpp scheduler.hpp
	$(CXX) $(CXXFLAGS) -c scheduler.cpp

befehl_ADD.o: befehl_ADD.cpp befehl_ADD.hpp befehl.hpp
	$(CXX) $(CXXFLAGS) -c befehl_ADD.cpp

befehl.o: befehl.cpp befehl.hpp
	$(CXX) $(CXXFLAGS) -c befehl.cpp

# Bereinigen der Build-Artefakte
clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean
