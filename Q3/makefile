CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = Q3.o 
TARGET = Q3


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
Q3.o: Q3.cpp
	$(CXX) $(CXXFLAGS) Q3.cpp

clean:
	rm -f $(TARGET) $(OBJECTS)
