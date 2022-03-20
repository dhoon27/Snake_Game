#pragma once
#include <Windows.h>
#include <stdio.h>

#define MAX_X (80)
#define MAX_Y (30)
#define MIN_X (0)
#define MIN_Y (0)
void gotoxy(int, int);
void draw_x(int, int, int, char);
void draw_y(int, int, int, char);
void print_border(void);
void hidecursor(void);
void console_init(void);
