#include <stdio.h>
#include "main.h"

/**
 * main - printing num of arguments passed to program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Sucess)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%\n", argc - 1);
	return (0);
}
