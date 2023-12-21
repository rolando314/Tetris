# Makefile for Raylib project

# Compiler
CC = g++

# Compiler flags
CFLAGS = -std=c++11 -Wall

# Raylib library and include directories
RAYLIB_LIB_DIR = lib
RAYLIB_INC_DIR = include

# Raylib library
RAYLIB_LIBS = -L$(RAYLIB_LIB_DIR) -lraylib

# Source files directory
SRC_DIR = src

# Source files
SRC = $(wildcard $(SRC_DIR)/*.cpp)

# Executable name
EXE = tetris

all: $(EXE)

$(EXE): $(SRC)
	$(CC) $(CFLAGS) -o $(EXE) $(SRC) -I$(RAYLIB_INC_DIR) $(RAYLIB_LIBS)

clean:
	rm -f $(EXE)