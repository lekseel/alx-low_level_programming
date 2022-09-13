#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Description - prits the alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= "Z")
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');

return 0;
}
