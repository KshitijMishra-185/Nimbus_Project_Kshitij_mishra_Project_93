#include <stdio.h>
#include <stdlib.h>
#include "input_handler.h"
#include "password_checker.h"
#include "file_logger.h"

int main() {
    char *pass = readPassword();

    if (pass == NULL) {
        printf("Error reading password.\n");
        return 0;
    }

    int strong = checkPassword(pass);

    if (strong == 1)
        printf("The password is STRONG\n");
    else
        printf("The password is WEAK\n");

    saveToFile(pass, strong);

    free(pass);
    return 0;
}
