#include <stdio.h>
/**
 * main - prinf the alphabet in lowercase, and then in uppercase
 *
 * Return: Always (Success)
 *
 */
int main(void)
{
	char alp[56] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
