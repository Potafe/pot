CXX = g++
CXXFLAGS = -std=c++17 -Wall
SRC = src/main.cpp
OUT = pot

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)