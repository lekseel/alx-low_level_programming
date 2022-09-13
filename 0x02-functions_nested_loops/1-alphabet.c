#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Description - prits the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++
	}
	_putchar('\n');
}
