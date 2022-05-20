#include "main.h"

/**
 * _puts - this is a code that
 * prints a string
 * and end with new line
 * @str: the string to print
 *
 * Return: void
 */
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}

/**
 * _putchar - this writes the character
 * for c to std_out
 * @c: is the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and err_no
 * is set appropriately.
 */
int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
