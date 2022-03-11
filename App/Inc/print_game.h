#pragma once
#include "console_config.h"

typedef struct _APPLE{
    int x, y;
    int nx, ny;
}APPLE;

typedef struct _SNAKE{
    int x, y;
    int dir;
    int length;
    int time;
    int nx, ny;
}SNAKE;

APPLE apple;
SNAKE snake;

void init_snake(void);
void init_apple(void);
void print_snake(void);
void print_apple(void);