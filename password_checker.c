#include <stdio.h>

int checkPassword(char *p) {
    int len = 0;
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSymbol = 0;

    while (p[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; i++) {
        char c = p[i];

        if (c >= 'A' && c <= 'Z') hasUpper = 1;
        else if (c >= 'a' && c <= 'z') hasLower = 1;
        else if (c >= '0' && c <= '9') hasDigit = 1;
        else hasSymbol = 1;
    }

    int strong = 1;

    if (len < 8 || !hasUpper || !hasLower || !hasDigit || !hasSymbol)
        strong = 0;

    if (strong == 0) {
        printf("\nPassword is weak. Suggestions:\n");

        if (len < 8) printf("- Make password at least 8 characters long\n");
        if (!hasUpper) printf("- Add an uppercase letter (A-Z)\n");
        if (!hasLower) printf("- Add a lowercase letter (a-z)\n");
        if (!hasDigit) printf("- Add a number (0-9)\n");
        if (!hasSymbol) printf("- Add a special symbol (!,@,#,$,...)\n");

        printf("\n");
    }

    return strong;
}
