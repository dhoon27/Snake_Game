#include <stdio.h>
#include "../Inc/console_config.h"
#include "../Inc/print_window.h"
#include "../Inc/game_select.h"

int main()
{
	console_init();
	print_snake_char();
	print_select();
	game_select();
	return 0;
}