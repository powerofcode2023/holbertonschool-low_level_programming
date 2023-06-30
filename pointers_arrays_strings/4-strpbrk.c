#include "main.h"

/**
 * _strpbrk - locates a character in a string
 * @s: pointer where we sarch for character
 * @accept: character we search
 * Return: NULL if character is not found, return pointer
 */

char *_strpbrk(char *s, char *accept)
{
  char *s1 = s - 1;
  int i;

  do {
    s1++;
    for (i=0; *(accept +1) != '\0'; i++)
      if (*s1 == *(accept + 1))
	return (s1);
  } while (*s1 != '\0');

  return (0);
}
