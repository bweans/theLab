#Group 2 - Assignment 2
#Tyson May and Desmond Hui
CC = gcc
CFLAGS = -Wall -std=c11
LDFLAGS = -lm -lc -lncurses -ltinfo
APP = appGame
DIR = bin
TARGET = $(DIR)/$(APP)

all: $(TARGET)
$(TARGET): main.o player.o splash_art.o level_1.o level_2.o | $(DIR)
	 $(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@
$(DIR):
	mkdir -p bin
%.o: %.c %.h
	$(CC) $(CFLAGS) -c $<

.PHONY:
clean:
	rm -f *.o $(APP) -r bin

run: $(APP)
	./$(APP)
