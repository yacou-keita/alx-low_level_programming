#include <stdio.h>
/**
 * main - prinf the alphabet in lowercase except q and e
 *
 * Return: Always (Success)
 *
 */
int main(void)
{
	char alp[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
