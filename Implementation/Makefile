CC = gcc
INC_DIR = ../App/Inc
SRC_DIR = ../App/Src
OBJS = main.o console_config.o game_select.o print_window.o start_game.o print_game.o
TARGET = Snake.exe

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

main.o : $(SRC_DIR)/main.c
	$(CC) -c $(SRC_DIR)/main.c
 
console_config.o : $(SRC_DIR)/console_config.c
	$(CC) -c $(SRC_DIR)/console_config.c

game_select.o : $(SRC_DIR)/game_select.c
	$(CC) -c $(SRC_DIR)/game_select.c

print_window.o : $(SRC_DIR)/print_window.c
	$(CC) -c $(SRC_DIR)/print_window.c

start_game.o : $(SRC_DIR)/start_game.c
	$(CC) -c $(SRC_DIR)/start_game.c

print_game.o : $(SRC_DIR)/print_game.c
	$(CC) -c $(SRC_DIR)/print_game.c

clean :
	rm -rf $(OBJS) $(TARGET)