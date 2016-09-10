CC=g++
CFLAGS=-Wall -O2

SRC=$(wildcard **/*.cpp)

BIN_DIR=bin

default: $(SRC)
	mkdir -p $(BIN_DIR)
	$(CC) $^ $(CFLAGS) -o $(BIN_DIR)/brainflak
