#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (success)
*/
int main(void)
{
	int num = 0;

	for (; num < 10; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
