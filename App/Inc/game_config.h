#pragma once
#include "console_config.h"

#define MAX_STAGE (5)
#define MAKE_MS (250000)

typedef struct _STAGE{
    int idx;
    int delay;
    int eat_cnt; //for stage level

}STAGE;

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
STAGE stage;

void init_game(void);
void checking(void);
void enter_key(void);
void init_stage(void);
void init_snake(void);
void make_apple(void);
void next_snake(void);
int check_pos(int, int);
void delay_ms(int);
