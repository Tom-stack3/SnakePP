RM=rm -f
CC = g++
CFLAGS = -Wall -g

all: snake

snake: Game.cpp Game.h Board.cpp Board.h Snake.cpp Snake.h Config.h
	$(CC) $(CFLAGS) Game.cpp Board.cpp Snake.cpp kbhit.cpp -o snake

clean:
	$(RM) snake