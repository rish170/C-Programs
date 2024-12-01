#include <stdio.h>

int main() {
    char str[100], copy[100];
    int i = 0, length = 0, vowel_count = 0, char_count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        length++;
        char_count++;
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowel_count++;
        }
        copy[i] = str[i];
        i++;
    }
    copy[i] = '\0';

    printf("Length of the string: %d\n", length);
    printf("Total number of characters in the string: %d\n", char_count);
    printf("Total number of vowels in the string: %d\n", vowel_count);
    printf("Copied string: %s\n", copy);

    return 0;
}
