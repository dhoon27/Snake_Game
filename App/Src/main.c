#include <stdio.h>
#include "../Inc/console_config.h"
#include "../Inc/print_window.h"
#include "../Inc/game_select.h"

int main()
{
	console_init();
	print_InitWindow();
	game_select();
	system("pause");
	return 0;
}