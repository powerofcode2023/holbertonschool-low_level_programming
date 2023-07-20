#ifndef FUNCTIONS_POINTERS_H
#define FUNCTIONS_POINTERS_H
#include <stdio.h>
/**
 * print_name - print a name
 * @name: name to be printed
 * @f: a pointer to a function that print a name
 */

void print_name(char *name, void (*f)(char *));

#endif
