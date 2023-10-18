#include "main.h"
/**
 * _printf - My own Printf function
 * @format: format.
 * Return: The Printed characters.
 */
int _printf(const char *format, ...)
{
	unsigned int p, s_counter, count = 0;

	va_list argss;

	va_start(argss, format);

	for (p = 0; format[p] != '\0'; p++)
	{
		if (format[p] != '%')
		{
			putcharac(format[p]);
		}
		else if (format[p] ==  '%' && format[p + 1] ==  'c')
		{
		putcharac(va_arg(argss, int));
		p++;
		}
		else if (format[p + 1] == 's')
		{
			s_counter = putters(va_arg(argss, char *));
			p++;
			count += (s_counter - 1);
		}
		else if (format[p + 1] == '%')
		{
			putcharac('%');
		}
		count += 1;
	}
	va_end(argss);
	return (count);
}
