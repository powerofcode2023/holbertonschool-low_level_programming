#include <stdlib.h>
#include <string.h>
#include "main.h"

/*
    Concatenates two strings.

    Arguments:
    - s1: Pointer to the first string. If NULL, it is treated as an empty string.
    - s2: Pointer to the second string. If NULL, it is treated as an empty string.

    Returns:
    - Pointer to the concatenated string (s1 followed by s2), allocated in memory.
    - Returns NULL on failure (memory allocation failure).
  
*/

char *str_concat(char *s1, char *s2) {
    size_t len1, len2;
    char *result;

    if (s1 == NULL) {
        s1 = "";
    }

    if (s2 == NULL) {
        s2 = "";
    }

    len1 = strlen(s1);
    len2 = strlen(s2);

    result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }

    strcpy(result, s1);
    strcat(result, s2);

    return result;
}


