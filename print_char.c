#include "main.h"

/*
 * print_c - Print characters (%c)
 * @list_ar: Store the a list of characters
 * Return: num of parameters printed
 */

int print_c(va_list list_ar)
{
	int c = va_arg(list_ar, int);

	return (_putchar(c));
}

/*
* print_s - print string (%s)
* @list_ar: Store the a list of characters
* Return: num of parameters printed
*/

int print_s(va_list list_ar)
{
	int i, count = 0;
	char *str;

	str = va_arg(list_ar, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);

	return (count);
}
