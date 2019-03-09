CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = Q2.o libArr.o libVec.o
TARGET = Q2


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
Q2.o: Q2.cpp
	$(CXX) $(CXXFLAGS) Q2.cpp
libArr.o: libArr.cpp libArr.h
	$(CXX) $(CXXFLAGS) libArr.cpp
libVec.o: libVec.cpp libVec.h
	$(CXX) $(CXXFLAGS) libVec.cpp

clean:
	rm -f $(TARGET) $(OBJECTS)
