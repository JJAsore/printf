#include "main.h"



void print_buffer(char buffer[], int *buff_ind);



/**
 * _printf - Printf function
 *@format: format.
 *Return: Printed chars.
 */

int _printf(const char *format, ...)

{
<<<<<<< HEAD

		int i, printed = 0, printed_chars = 0;

			int flags, width, precision, size, buff_ind = 0;

				va_list list;

					char buffer[BUFF_SIZE];



						if (format == NULL)

									return (-1);



							va_start(list, format);



								for (i = 0; format && format[i] != '\0'; i++)

										{

													if (format[i] != '%')

																{

																				buffer[buff_ind++] = format[i];

																							if (buff_ind == BUFF_SIZE)

																												print_buffer(buffer, &buff_ind);

																										/* write(1, &format[i], 1);*/

																										printed_chars++;

																												}

															else

																		{

																						print_buffer(buffer, &buff_ind);

																									flags = get_flags(format, &i);

																												width = get_width(format, &i, list);

																															precision = get_precision(format, &i, list);

																																		size = get_size(format, &i);

																																					++i;

																																								printed = handle_print(format, &i, list, buffer,

																																														flags, width, precision, size);

																																											if (printed == -1)

																																																return (-1);

																																														printed_chars += printed;

																																																}

																}



									print_buffer(buffer, &buff_ind);



										va_end(list);



											return (printed_chars);

}



/**
 *print_buffer - Prints the contents of the buffer if it exist
 *@buffer: Array of chars
 *@buff_ind: Index at which to add next char, represents the length.
 */

void print_buffer(char buffer[], int *buff_ind)

{

		if (*buff_ind > 0)

					write(1, &buffer[0], *buff_ind);



			*buff_ind = 0;

=======
	int i = 0;
	int count = 0;
	int value = 0;
	va_list args;
	int (*f)(va_list);
	va_start(args, format);
	/*int (*f)(va_list);*/

	/*Prevent parsing a null pointer*/
	if (format == NULL)
		return (-1);

	/*Print each character of string*/
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
			f = check_specifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				count = count + value;
				i = i + 2;
				continue;
			}

			if (format[i + 1] == '\0')
			{
				break;
			}

			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i + 1], 1);
				count = count + value;
				i = i + 2;
				continue;
			}

		}
	}

	return (count);
>>>>>>> 2c8ba258767c709bb7ba6f4806a51f56b285ad52
}
