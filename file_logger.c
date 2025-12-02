#include <stdio.h>

void saveToFile(char *p, int ok) {
    FILE *f = fopen("password_log.txt", "a");

    if (f == NULL) {
        printf("File not opening\n");
        return;
    }

    if (ok == 1)
        fprintf(f, "Password: %s -> STRONG\n", p);
    else
        fprintf(f, "Password: %s -> WEAK\n", p);

    fclose(f);
}
