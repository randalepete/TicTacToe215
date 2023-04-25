# Makefile for tictactoe

CC = g++
CFLAGS = -std=c++11
EXE = tictactoe

SRCS = src/main.cpp src/game.cpp src/board.cpp
OBJS = $(patsubst src/%.cpp,obj/%.o,$(SRCS))

.PHONY: clean all

all: $(EXE)

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXE)

obj/%.o: src/%.cpp | obj
	$(CC) $(CFLAGS) -c $< -o $@

obj:
	mkdir -p obj

clean:
	rm -f $(EXE)
	rm -rf obj

