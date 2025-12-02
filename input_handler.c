#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readPassword() {
    char *p = (char*)malloc(100);

    if (p == NULL) {
        printf("Memory not given\n");
        return NULL;
    }

    printf("Enter password: ");
    fgets(p, 100, stdin);

    int i = 0;
    while (p[i] != '\0') {
        if (p[i] == '\n') {
            p[i] = '\0';
            break;
        }
        i++;
    }

    return p;
}
