#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;

	/*
	 * Print alphabet in lowercase
	 */
	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	/* Print alphabet in uppercase */
	letter = 'A';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
