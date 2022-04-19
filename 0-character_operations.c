#include "main.h"
#include <stdio.h>

/**
* print_c - Print characters (%c)
* @ar_list: Store the a list of characters
* @va_list: list characters
* Return: num of parameters printed
*/

int print_c(va_list ar_list)
{
	int c = va_arg(ar_list, int);

	return (_putchar(c));
}
