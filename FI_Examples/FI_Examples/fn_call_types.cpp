#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "fn_call_types.h"

void print_fn_call_message()
{
	// A good tutorial available at http://www.codingunit.com/c-tutorial-call-by-value-or-call-by-reference

	printf("\n This examples (fn_call_types.cpp) explains how and why to call by value and call by reference\n ");

	printf("We first define two variables (x,y) and we want to add 10 to both of them");
	int x = 50, y = 20;
	printf("Calling function_value (call by value) .....\n");
	function_value(x, y);
	printf("....But the value of x and y outside the function is : (%d, %d)\n", x, y);
	printf("However, we permanently want to change the value of x and y. So we try to return a value in the function...\n");
	x = function_return(x, y);
	printf("...But we can only return 1 value. So the value of x and y outside the function is : (%d, %d)\n", x, y);
	x = 50, y = 20;
	printf("\n So we try Call By Reference.....\n");
	function_reference(x, y);
	printf("....Now you will notice that the values of x and y have changed permanently : (%d, %d)\n\n", x,y);
	printf("................EXAMPLE OVER..............\n");


}

void function_value(int a, int b)
{
	a = a + 10;
	b = b + 10;
	printf("\n\t\t Value of (a,b) inside function by value is : (%d, %d)\n", a, b);
}
int function_return(int a, int b)
{
	a = a + 10;
	b = b + 10;
	printf("\n\t\t Value of (a,b) inside function by value is : (%d, %d)\n", a, b);
	return a;
}
void function_reference(int &a, int &b)
{
	a = a + 10;
	b = b + 10;
	printf("\n\t\t Value of (a,b) inside function by value is : (%d, %d)\n", a, b);

}