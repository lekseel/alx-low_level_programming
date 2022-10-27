#include "main.h"

/**
 * clear_bit - clear bit at index
 * @n: pointer unsigned long int
 * @index: index of bit to reset
 * Return: 1 if successful, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int area;

	area = 1;
	area = area << index;

	if (n == NULL || index > sizeof(unsigned long int) * 8)
		return (-1);

	if (((*n >> index) & 1) == 1)
		*n = area ^ *n;

	return (1);
}
