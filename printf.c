#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++; /* Move past '%'*/
			if (*format == '\0')
				break; /* End of string after '%'*/
			if (*format == 'c')
			{
				int c = va_arg(args, int);

				putchar(c);
				count++;
			} else if (*format == 's')
			{
				char *s = va_arg(args, char*);

				while (*s)
				{
					putchar(*s);
					count++;
					s++;
				}
			} else if (*format == '%')
			{
				putchar('%');
				count++;
			}
		} else
		{
			putchar(*format);
			count++;
		} format++;
	} va_end(args);
	return (count);
}
