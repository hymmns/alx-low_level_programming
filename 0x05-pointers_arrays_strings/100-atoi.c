#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
	int ind = 0,marker = -1;
	unsigned int res;

	while( s[ind] != '\0')
    	{
        	unsigned int val = s[ind] - '0';

        	if (!(val > 9) && ((val == 0) || (val > 0)))
            	{

                	if (marker == -1 && ind > 0)
                   		 marker = ind - 1;

               		if(ind > 0)
                  		res = (res * 10) + val;
               		else
                    		res = val;

            	}
        	ind++;
    	}

    	res = *(s + marker) == '-' ? -res : res;
    	return (res);
}
