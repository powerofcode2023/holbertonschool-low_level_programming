#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 *
 * Arguments:
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string
 * Returns:* - Pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *result;

	if (s1 == NULL)
	{
	s1 = "";
	}

	if (s2 == NULL)
	{
	s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
