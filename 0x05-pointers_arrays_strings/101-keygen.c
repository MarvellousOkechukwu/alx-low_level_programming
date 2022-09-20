#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: 0 
 */

int main(void)
{
	int i;
	char c;

	srand(time(NULL));
	while (i <= 2645)
	{
		c = rand() % 128;
		i += c;
		putchar(c);
	}
	putchar(2722 - i);
	return (0);
}
