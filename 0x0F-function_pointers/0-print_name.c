#include "functions_pointer.h"

/**
 * print_name - prints a name
 * @name: This is name's input
 * @f: a function pointer
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
