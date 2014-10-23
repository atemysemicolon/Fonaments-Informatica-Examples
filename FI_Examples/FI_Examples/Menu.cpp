#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "Menu.h"
#include "Fn_example.h"
#include "fn_call_types.h"
void menu()
{	
	system("cls");
	printf("MENU\n");
	printf("------------------\n");
	printf("1. Function definition and decleration\n");
	printf("2. Call by Value vs Call by Reference\n");
	printf("3. kbhit vs getch (kbhit AND getch)\n");
	printf("4. How to use HANDLE to draw objects on the screen\n");
	printf("5. Get out of here\n");
	printf("Enter an option : \n");

}


int menuHandler(char opcio)
{
	system("cls");
	switch (opcio)
	{
	case '1': print_message_about_functions();
		break;
	case '2': print_fn_call_message();
		break;
	case '3': //kbhit vs getch 
		break;
	case '4': //Sample HANDLE code 
		break;
	default: //Quit the game
		return 1;
		break;
	};
	system("PAUSE");
	return 0;
}