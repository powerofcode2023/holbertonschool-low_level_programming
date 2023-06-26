#include <stdio.h>

void invert_num(int *pt_num1, int *pt_num2)
{
    int temp = 0;

    temp = *pt_num2;
    *pt_num2 = *pt_num1;
    *pt_num1 = temp;
}

void swap_int(int *numA, int *numB);
{
    int numA = 15;
    int numB = 28;

    int *pointernumA = &numA;
    int *pointernumB = &numB;

    printf("AVANT: A= %d et B = %d\n", numA, numB);
    invert_num(pointernumA, pointernumB);
    printf("APRES: A= %d et B = %d\n", numA, numB);

    return (0);
}
