#include <stdio.h>
/**
 * main - prints reversed alphabet.
 *
 * Return: Always (Success)
 *
 */
int main(void)
{
	int i;

	for (i = 122; i < 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
