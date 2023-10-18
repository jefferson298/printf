#include "main.h"
/**
 * _printf - My own Printf function
 * @format: format.
 * Return: The Printed characters.
 */
int _printf(const char *format, ...)
{
	unsigned int p, count = 0;

	va_list argss;

	va_start(argss, format);

	for (p = 0; format[p] != '\0'; p++)
	{
		if (format[p] != '%')
		{
			putcharac(format[p]);
		}
	}
}
