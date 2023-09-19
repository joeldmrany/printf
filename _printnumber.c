#include "main.h"

void printnumber(int number)
{
	int digit, index, i;
	char buffer[10];
    if (number < 0) {
        _putchar('-');
        number = -number;
    }
    if (number == 0) {
        _putchar('0');
        return;
    }

    index = 0;

    while (number > 0) {
        digit = number % 10;
        buffer[index++] = '0' + digit;
        number /= 10;
    }
    for (i = index - 1; i >= 0; i--) {
        _putchar(buffer[i]);
    }
}
