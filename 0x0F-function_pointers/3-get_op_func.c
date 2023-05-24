#include<stdlib.h>
#include "3-calc.h"
/**
* get_op_func_ - gets the correct function
* @s: opperstor passed as argument
* Return:  pointer to the function that corresponds
* to the operator given as a parameter
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int p = 0;

	while (ops[p].op != NULL && *(ops[p].op) != *s)
		p++;
	return (ops[p].f);
}
