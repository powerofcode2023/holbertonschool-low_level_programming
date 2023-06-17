#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print string'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
printf("char size: %ld bytes\n", sizeof(char));
printf("int size: %ld bytes\n", sizeof(int));
printf("long int size: %ld bytes\n", sizeof(long int));
printf("long long int size: %ld bytes\n", sizeof(long long int));
printf("float size: %ld bytes\n", sizeof(float));
return (0);
}
