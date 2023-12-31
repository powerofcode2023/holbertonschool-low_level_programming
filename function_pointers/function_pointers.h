#ifndef FUNCTIONS_POINTERS_H
#define FUNCTIONS_POINTERS_H
#include <stdio.h>
/**
 * print_name - print a name
 * @name: name to be printed
 * @f: a pointer to a function that print a name
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
