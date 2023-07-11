#include <stdlib.h>
#include <string.h>
#include "main.h"

char *_strdup(char *str) {
    size_t length;
    char *duplicate;

    if (str == NULL)
        return NULL;

    length = strlen(str) + 1;
    duplicate = (char *)malloc(length * sizeof(char));

    if (duplicate == NULL)
        return NULL;

    memcpy(duplicate, str, length);
    return duplicate;
}

