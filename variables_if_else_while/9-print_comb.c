#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 mean success
 */
int main(void)
{
  int combinations;
  for (combinations = '0' ; combinations <= '9' ; combinations++)
    {
      putchar(combinations);
      if (combinations != '9')
	{
	  putchar(',');
	  putchar(' ');
	}  
    }
  putchar('\n');
  return (0);
}
