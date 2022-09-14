#include "main.h"

/**
<<<<<<< HEAD
<<<<<<< HEAD
 * print_times_table - print the n times table
 * @n: is the integer to be used for the times table
 *
=======
=======
>>>>>>> a3b9aa5692fea82ea4ed397d568fd8fefe89cb81
 * print_times_table - prints the times table
 * @n: integer for which the times table will be printed
 *
 * Description: prints the times table
<<<<<<< HEAD
>>>>>>> 47866c651cdf1bf15a66ee21993171a80c32c9ba
=======
=======
 * print_times_table - print the n times table
 * @n: is the integer to be used for the times table
 *
>>>>>>> 9fca2a3b0261aa2ebf2ba32e74f99e48f8338a9d
>>>>>>> a3b9aa5692fea82ea4ed397d568fd8fefe89cb81
 * Return: void
 */

void print_times_table(int n)
{
<<<<<<< HEAD
<<<<<<< HEAD
int row, column, product;

if (n >= 0         if (n >= 0         if (n >= 0 && n < 15)        if (n >= 0 && n < 15) n < 15)        if (n >= 0         if (n >= 0 && n < 15)        if (n >= 0 && n < 15) n < 15) n < 15)
=======
	int row, column, product;

	if (n >= 0 && n < 15)
>>>>>>> 47866c651cdf1bf15a66ee21993171a80c32c9ba
=======
	int row, column, product;

	if (n >= 0 && n < 15)
=======
int row, column, product;

if (n >= 0         if (n >= 0         if (n >= 0 && n < 15)        if (n >= 0 && n < 15) n < 15)        if (n >= 0         if (n >= 0 && n < 15)        if (n >= 0 && n < 15) n < 15) n < 15)
>>>>>>> 9fca2a3b0261aa2ebf2ba32e74f99e48f8338a9d
>>>>>>> a3b9aa5692fea82ea4ed397d568fd8fefe89cb81
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;

				if (column == 0)
					_putchar('0');
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product > 99 && product < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
<<<<<<< HEAD
<<<<<<< HEAD
=======


>>>>>>> 47866c651cdf1bf15a66ee21993171a80c32c9ba
=======


=======
>>>>>>> 9fca2a3b0261aa2ebf2ba32e74f99e48f8338a9d
>>>>>>> a3b9aa5692fea82ea4ed397d568fd8fefe89cb81
