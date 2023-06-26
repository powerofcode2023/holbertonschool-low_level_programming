#include "main.h"

/**
 * _strlen - return length of a string
 *@s: string
 *Return: length of the string
 */

int _strlen(char *s)
{
  int i;
  
  i= 0;
  while (*s !='0')
    {
      s++;
      i++;
    }
  return(i);
}
