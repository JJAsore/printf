#include <stdio.h>
#include "main.h"

/**
  * specifier - check character specifier and appropriate function
  *for printing
  * @format:the specifier type(char *)
  *
  * Return: pointer to a function.
  */

int (*specifier(char *format))(va_list)
{
	int i;

	func_t my_array[3] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent}
		{'\0', NULL}
	};
	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (my_arrray[i].t == *format)
		{
			return (my_array[i].f);
		}
	}

	return (NULL);
}
