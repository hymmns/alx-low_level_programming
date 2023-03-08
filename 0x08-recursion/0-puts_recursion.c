#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * Return: void.
 */
void (char *s)
{
        if (*s == '\0')
        {
                _putchar('\n');
                return;
        }

        _putchar(*s);
        _puts_recursion(s + 1);
}
