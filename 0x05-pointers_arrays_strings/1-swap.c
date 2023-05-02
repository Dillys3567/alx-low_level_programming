#include "main.h"
/**
 * swap_int - swap 2 int values
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
