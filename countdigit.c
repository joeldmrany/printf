#include "main.h"
/**
 * countdigits - it counts the number of digits
 * @number: the number
 * Return: then number of digits
 */
int countdigits(int number)
{
	int count;

	if (number == 0)
	{
		return (1);
	}
	count = 0;
	if (number < 0)
	{
		count++;
		number = -number;
	}
	while (number > 0)
	{
		number /= 10;
		count++;
	}
	return (count);
}
