#include "function-pointers.h"
/**
* main - prints opcodes
* array_iterator -  program that prints the opcodes of its own main function
* @argv: array of argumrnts
* @argc: number of arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int bytes p;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;

	for (p = 0; p < bytes; p++)
	{
		if (p == bytes -1)
		{
			printf("%02hh", arr[p]);
	}
	return (0);
}
