#include "main.h"
/**
 * main - entry
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	char alpha[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(alpha[c]);
	}
	_putchar('\n');
	return (0);
}
