#include "../Inc/print_window.h"

void print_snake_char(void)
{
	draw_x(9, 5, 10, '#');
	draw_y(9, 5, 4, '#');
	draw_x(9, 9, 10, '#');
	draw_y(18, 9, 4, '#');
	draw_x(9, 13, 10, '#');

	draw_x(22, 5, 10, '#');
	draw_y(22, 5, 8, '#');
	draw_y(31, 5, 8, '#');

	draw_x(35, 5, 10, '#');
	draw_y(35, 5, 8, '#');
	draw_y(44, 5, 8, '#');
	draw_x(35, 9, 10, '#');

	draw_x(48, 5, 10, '#');
	draw_x(48, 9, 10, '#');
	draw_y(57, 5, 8, '#');

	draw_x(61, 5, 10, '#');
	draw_y(61, 5, 8, '#');
	draw_x(61, 9, 10, '#');
	draw_x(61, 13, 10, '#');
}
void print_select(void)
{
	gotoxy(39, 18);
	printf("Start");
	gotoxy(39, 20);
	printf("Quit");
	gotoxy(0, 35);
}