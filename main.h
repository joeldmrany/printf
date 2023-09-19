#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _isdigit(int num);
int _strlen(char *str);
int _numlen(int *num);
void printnumber(int number);
int countdigits(int number);

#endif
