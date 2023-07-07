#include <stdio.h>
/**
 *main - program print its own name
 *@argc: count numbers of arguments
 *@argv: array containing names of differents arguments
 *Return: 0 mean success
 */


int  main(int argc, char *argv[])   
{
    int i;
    for (i = 0; i < argc; i++)
    {
        
        printf("%s ", argv[0]);       
    }
    printf("\n");
    return (0);
}

