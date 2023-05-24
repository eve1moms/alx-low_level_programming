#ifndef FUNCTION_POINTERS_
#define FUNSTION_POINTERS_
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

#endif /*for function pointers*/
