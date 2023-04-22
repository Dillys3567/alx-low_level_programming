#include <stdio.h>
/**
 * main - print numbers with putchar
 * Return: Always 0
 */
int main(void)
{
	char nums[10]="0123456789";
	int num;

	for (num = 0 ; num <= 9 ; num++)
	{
		putchar(nums[num]);
	}
	putchar('\n');
	return (0);
}
