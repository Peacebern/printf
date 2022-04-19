#include "main.h"

/**
 * _printf - a function to prrint to the console
 * @format: an array to print and check the type
 *
 * Return: counts of character printed
 */

int _printf(const char *format, ...)
{
	int count = -1;

	if (format != NULL)
	{
		int i;
		va_list list_ar;
		int (*o)(va_list);

		va_start(list_ar, format);

		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		count = 0;

		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count += _putchar(format[i]);
					i++;
				}
				else if (format[i + 1] != '\0')
				{
					o = func_get(format[i + 1]);
					count += (o ? o(list_ar) : _putchar(format[i] + _putchar(format[i + 1]));
					i++;
				}
			}
			else
				count += _putchar(format[i]);
		}
		va_end(list_ar);
	}

	return (count);
}
