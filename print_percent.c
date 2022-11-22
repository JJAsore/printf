#include "main.h"

/**
 * print_percent - print character % to stdout
 * @args: variadic parameter
 *
 * Return: number of characters printed.
 */

int print_percent(va_list args)
{
	(void)args;

	write(1, "%", 1);

	return (1);
}
