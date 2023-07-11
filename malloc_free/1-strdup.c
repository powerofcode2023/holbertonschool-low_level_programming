#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: On success, returns a pointer to the duplicated string.
 *         Returns NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	size_t length = strlen(str) + 1;
	char *duplicate = (char *)malloc(length * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	memcpy(duplicate, str, length);
	return (duplicate);
}

