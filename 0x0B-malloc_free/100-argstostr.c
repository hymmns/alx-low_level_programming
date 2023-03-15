#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of program.
 * @ac: int - argument count.
 * @av: char - argument value.
 *
 * Return: char pointer to string otherwise NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, cnt = 0;
	char *toStr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			cnt++;

	toStr = (char *) malloc((sizeof(char) * cnt) + ac + 1);
	if (toStr == NULL)
		return (NULL);

	for (i = 0, cnt = 0; i < ac; i++, cntt++)
	{
		for (j = 0; av[i][j]; j++, cnt++)
			toStr[cnt] = av[i][j];
		toStr[cnt] = '\n';
	}
	cnt += 1;
	toStr[cnt] = '\0';
	return (toStr);
}
