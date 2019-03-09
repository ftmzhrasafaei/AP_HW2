CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = Q1.o Map.o
TARGET = Q1


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
Q1.o: Q1.cpp
	$(CXX) $(CXXFLAGS) Q1.cpp
Map.o: Map.cpp Map.h
	$(CXX) $(CXXFLAGS) Map.cpp

clean:
	rm -f $(TARGET) $(OBJECTS)
