#include "main.h"
/**
 * _isdigit - check if number is digit or not
 * @num: the number
 */
int _isdigit(int num)
{
	if (num <= 9 && num >= '0')
		return (1);
	else
		return (0);
}
