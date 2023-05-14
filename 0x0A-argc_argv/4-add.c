#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
/**
* check_num - check - string there are digit
* @str: the string
* Return: 0
*/
int check_num(char *str)
{
	unsigned int count;

	count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
* main - name of program
* @argv: arguments
* @argc: number of arrays
* Return: 0
*/
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf(" % d\n", sum);
	return (0);
}
