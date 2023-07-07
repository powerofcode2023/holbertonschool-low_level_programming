#include <stdio.h>

/**
 * main - Program to print the number of arguments
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 for success
 */
int main(int argc, char **argv __attribute__((unused)))
{
    printf("%d\n", argc - 1);
    return 0;
}
