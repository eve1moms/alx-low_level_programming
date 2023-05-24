#include "function_pointers.h"
/**
* main - prints opcodes
* @argv: array of argumrnts
* @argc: number of arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int bytes, p;
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
	arr = (char *)main;

	for (p = 0; p < bytes; p++)
	{
		if (p == bytes -1)
		{
			printf("%02hhx\n", arr[p]);
			break;
		}
		printf("%02hhx", arr[p]);
	}
	return (0);
}
