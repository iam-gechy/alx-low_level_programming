#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - write a function that prints a name
 * @name: some randome name
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
