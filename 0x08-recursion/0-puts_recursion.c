#include "main.h"

/**
 *recursive implementation of the puts function in the standard library.
 *the _puts_recursion function requires the programmer to manually.
**/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
