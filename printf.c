#include "main.h"
/**
 * _printf - My own Printf function
 * @format: format.
 * Return: The Printed characters.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0; /* Move the declaration to the beginning of the block*/

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
			{
				int c = va_arg(args, int);

				putcharac(c);
				count++;
			} else if (*format == 's')
			{
				char *s = putters(va_arg(args, char*));

				while (*s)
				{
					putcharac(*s);
					count++;
					s++;
				}
			} else if (*format == '%')
			{
				putcharac('%');
				count++;
			}
		} else
		{
			putcharac(*format);
			count++;
		} format++;
	} va_end(args);
	return (count);
}
