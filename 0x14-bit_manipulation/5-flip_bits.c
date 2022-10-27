#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip
 * to get from one number to another
 * @n: first integr
 * @m:second integer
 * Return:number of bits needed to complete flipping
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int answer;
	unsigned long int counter;

	answer = n ^ m;

	for (counter = 0; answer > 0;)
	{
		if ((answer & 1) == 1)
			counter++;

		answer = answer >> 1;
	}
	return (counter);
}
