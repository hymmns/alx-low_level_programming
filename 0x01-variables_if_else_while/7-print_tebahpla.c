#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (success)
*/
int main(void)
{
	char c = 'z';

	while(c >= 'a')
	{
		putchar(c);
		c--;
	}
	puchar('\n');
	return (0);
}
