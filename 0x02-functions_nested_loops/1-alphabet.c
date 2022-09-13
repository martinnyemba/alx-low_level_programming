#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: always 0;
 *
 */
void print_alphabet(void)
{
	char _char;

	for (_char = 'a'; _char <= 'z'; _char++)
	{
		_putchar(_char);
	}
	_putchar('\n');
}
