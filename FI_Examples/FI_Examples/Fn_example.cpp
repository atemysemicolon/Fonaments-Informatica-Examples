#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "Fn_example.h"
#include "Graphics_Console.h"
void print_message_about_functions()
{
	printf("\n\n\n");
	printf("This example shows you how a function works(Fn_Example.cpp)\n");
	
	printf("Every function usually has 3 components :\n");
	printf(" 1. A function Declaration : <Return Type (int/void/char...)> <Function name> (<Parameters (int a, char b...)> ); \n");
	printf(" 2. A function Definition(the function body) : <Return Type (int/void/char...)> <Function name> (<Parameters (int a, char b...)> )"
			"\n\t{\n\t\t//Some Code \n\t\t//<Return a value(if not void)>\n\t}\n");
	printf(" 3a. A function Call(if the return type is void) : <Function name> (<Parameters (int a, char b...)> );\n");
	printf(" or\n");
	printf(" 3b. A function Call (if not void): <Datatype(int/char...)> <variable name> = <Function name> (<Parameters (int a, char b...)> );\n");

	printf("\n\n\n In this example, we have a function called sample function \n"
		"which takes two parameters int a and char b \n"
		"it will find out the ASCII value of b and add it to a \n"
		"This will be returned\n");
	int x=0;
	char y='a';
	printf("\n Enter a character....: ");
	y = _getche(); // try with _getch()
	printf("\n Enter a number ... : ");
	scanf_s("%d", &x);
	
	printf("\n \t Calling the Function....");
	int return_value = sampleFunction(x, y);
	printf("\n \t The Returned Value is : %d\n", return_value);



}

int sampleFunction(int a, char b)
{
	int b_int = (int)b;
	int sum = a + b_int;
	return sum;
}