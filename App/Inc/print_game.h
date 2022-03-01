#pragma once
#include "console_config.h"

typedef struct _APPLE{
    int x, y;
}APPLE;

typedef struct _SNAKE{
    int x, y;
    int dir;
    int length;
    int time;
}SNAKE;

APPLE apple;
SNAKE snake;

int nx, ny;

void init_snake(void);
void init_apple(void);
void print_snake(void);
void print_apple(void);