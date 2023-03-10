#include <stdio.h>
#include "main.h"

/**
 * main - print every argument it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 *
 */

int main(argc, char *[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
