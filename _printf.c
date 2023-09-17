#include "main.h"
#include <stdarg.h>
/**
 * _printf - it is playing like printf function
 * @format: the format of it
 * Return: the number of characters of the output;
 */
int _printf(const char *format, ...)
{
	int a, b, i;
	char c;
	char *d;
	va_list argu;

	va_start (argu, format);
	if (format == NULL)
		return (0);
	b = 0;
	for (a = 0; format[a]; a++)
	{
		if (format[a] == '%' && format[a + 1] == 'c')
		{
			c = va_arg(argu, int);
			_putchar(c);
			b++;
			a++;
			a++;
		}
		if (format[a] == '%' && format[a + 1] == 's')
		{
			d = va_arg(argu, char*);
			for (i = 0; d[i]; i++)
			{
				_putchar(d[i]);
				b++;
			}
			a++;
			a++;
		}
		if (format[a] == '%' && format[a + 1] == '%')
		{
			_putchar('%');
			b++;
			a++;
		}
		else
		{
			_putchar(format[a]);
			b++;
		}
	}
	return (b);
}