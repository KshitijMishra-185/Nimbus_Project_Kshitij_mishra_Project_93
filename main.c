#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "input_handler.h"
#include "password_checker.h"
#include "file_logger.h"

int main() {
    char *password = readPassword();  // Step 1: Read password from user

    // Step 2: Check password strength
    PasswordResult result = checkPassword(password);

    // Step 3: Display result to user
    if (result.isStrong) {
        printf("\nThe password is STRONG\n");
    } else {
        printf("\nThe password is WEAK\n");
        printf("\nSuggestions:\n");
        for (int i = 0; i < result.suggestionCount; i++) {
            printf("- %s\n", result.suggestions[i]);
        }
    }

    // Step 4: Save log to file
    saveToFile(password, result.isStrong);

    // Step 5: Free allocated memory
    free(password);

    return 0;
}
