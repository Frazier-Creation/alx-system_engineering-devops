#include "main.h"

/**
 * main - print _putchar
 *
 * is written by frazier
 *
 * Return: 0
 *
 */

int main(void)

{

	char frazier[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	int b = 0;

	while (b < 9)

	{

		_putchar(frazier[b]);

		b  =  b + 1;

	}

	_putchar('\n');

	return (0);

}
