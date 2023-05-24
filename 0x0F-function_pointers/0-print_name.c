#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - print name
 * @name: name
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
