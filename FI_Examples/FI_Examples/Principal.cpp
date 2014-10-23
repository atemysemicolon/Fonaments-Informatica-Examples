#include <conio.h>
#include <stdio.h>
#include "Menu.h"

void main()
{
	int should_i_quit = 0;
	char tecla = 'A';
	do
	{
		menu();
		tecla=_getch();
		should_i_quit = menuHandler(tecla);
		

	} while (should_i_quit!=1);

}