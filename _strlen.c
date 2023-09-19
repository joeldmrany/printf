#include "main.h"
/**
 * _strlen - get the length of the string
 * @str: the string
 * Return: number of characters
 */
int _strlen(char *str)
{
	int a;
	a = 0;
	while(str[a])
		a++;
	return (a);
}
