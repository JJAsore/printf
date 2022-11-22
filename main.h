#ifndef _MAIN_H_
#define _MAIN_H_

int _printf(const char *format, ...);
int (*specifier(char *format))(va_list);

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

#endif
