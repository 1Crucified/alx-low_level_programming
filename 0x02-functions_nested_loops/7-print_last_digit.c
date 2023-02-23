#include "main.h"

/**
 * print_last_digit - function that print last digit.
 *
 * @a: function parameter
 *
 * Return: b
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
		b = -(b);
	return (b);

}
