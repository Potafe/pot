CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude
SRC = main.cpp src/commands/init.cpp
OUT = pot

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)