#include <stdio.h>

int main() {
    char str1[100], str2[100], concat[200];
    int i, j, equal = 1, len1 = 0, len2 = 0, found = -1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string (substring): ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character from both strings
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
    }
    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
    }

    // Compare strings
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            equal = 0;
            break;
        }
    }

    // Find lengths of both strings
    for (len1 = 0; str1[len1] != '\0'; len1++);
    for (len2 = 0; str2[len2] != '\0'; len2++);

    // Concatenate strings
    for (i = 0; str1[i] != '\0'; i++) {
        concat[i] = str1[i];
    }
    for (j = 0; str2[j] != '\0'; j++) {
        concat[i + j] = str2[j];
    }
    concat[i + j] = '\0';

    // Find substring occurrence
    for (i = 0; i <= len1 - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            found = i;
            break;
        }
    }

    // Print results
    if (equal) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    printf("Longer string: %s\n", len1 >= len2 ? str1 : str2);
    printf("Concatenated string: %s\n", concat);

    if (found != -1) {
        printf("Substring found at index: %d\n", found);
    } else {
        printf("Substring not found in the first string.\n");
    }

    return 0;
}
