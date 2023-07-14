#include <stdio.h>
#include <libgen.h>

int main(void) {
    const char* fileName = basename(__FILE__);
    printf("Compiled from file: %s\n", fileName);
    return 0;
}

