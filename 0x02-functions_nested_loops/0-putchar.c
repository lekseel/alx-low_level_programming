#include "main.h"
/**
 * main - entry point
 * Return: Always 0 Success
 * 
 */

int main(void)
{
	char a[] = "_putchar";
	int b;

	for (b = 0; b < 8; b++)
	{
		_putchar(a[b]);
	}
	_putchar('\n');
	return (0);
}
