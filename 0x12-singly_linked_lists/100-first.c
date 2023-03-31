#include "lists.h"

/**
 * before_main - prints before the main function.
 *
 * Return: void
 */
void __attribute__((constructor)) before_main(void)
{
	printf(
		"You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
