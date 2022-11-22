#include <stdarg.h>
#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
  * _printf - prints a string in desired formats
  * @format: string to print
  * @...: variadic parameters
  *
  * Return: number of characters printed
  */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int value = 0;
	va_list args;

	va_start(args, format);

	/*prevent null pointer*/
	if (format == NULL)
		return (-1);

	/*print rach character of a string*/
	while (format[i])
	{
		if (format[i] != '%')
		{
		value = write(1, &format[i], 1);
		count = count + value;
		i++;
		continue;
		}

		if (format[i] == '%')
		{
			//expression
		}
	}

	return (count);
}
