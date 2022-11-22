#ifndef _MAIN_H_
#define _MAIN_H_

/*default header files*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*specifier(const char *format))(va_list);

/**
 * struct func - struct for specifier to printer
 * @t: character to compare
 * @f: function that handles printing
 */
typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

/*specifier functions*/
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_dec(va_list args);
int print_int(va_list args);

#endif
