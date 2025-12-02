#include <stdio.h>
#include "input_handler.h"
#include "password_checker.h"
#include "file_logger.h"

int main() {

    char password[100];

    // Step 1: Read password from the user
    readPassword(password);

    // Step 2: Check password strength
    int isStrong = checkPasswordStrength(password);

    // Step 3: Display result and log it
    if (isStrong) {
        printf("The password is STRONG\n");
        logPasswordResult(password, "STRONG");
    } else {
        printf("The password is WEAK\n");
        printSuggestions(password);
        logPasswordResult(password, "WEAK");
    }

    return 0;
}
