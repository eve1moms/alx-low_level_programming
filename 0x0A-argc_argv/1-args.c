#include "main.h"
#include<stdio.h>
/**
* main - prints the number of arguments
* @argv: array of arguments
* @argc: number of arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
(void) argv; /* assume argc*/
	printf("%d\n", argc - 1);
	return (0);
}
