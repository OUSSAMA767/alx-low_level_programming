#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: Number of command line arguments.
 * @argv: The array that contains the command line arguments.
 * Return: 0 when successful.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]);
	return (0);
}
