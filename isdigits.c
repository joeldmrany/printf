#include "main.h"
/**
 * _isdigit - check if an integer is a valid positive integer
 * @num: the integer to check
 * Return: 1 if it's a valid positive integer, 0 otherwise
 */
int _isdigits(int num)
{
	if (num < 0)
	{
		num = -num;
	}

    if (num == 0)
    {
        return 0; 
    }

    while (num > 0) {
        int digit = num % 10; 
        if (digit < 0 || digit > 9) {
            return 0; 
        }
        num /= 10;
    }

    return 1; 
}

