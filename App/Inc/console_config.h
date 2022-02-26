#pragma once
#include <Windows.h>
#include <stdio.h>

void gotoxy(int, int);
void draw_x(int, int, int, char);
void draw_y(int, int, int, char);
void print_border(void);
void hidecursor(void);
void console_init(void);
