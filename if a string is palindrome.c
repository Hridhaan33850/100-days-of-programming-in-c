#include <stdio.h>

int main() {
    char str[100];
    int i, j, length = 0, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0') {
        if (str[length] == '\n') {
            str[length] = '\0';
            break;
        }
        length++;
    }

    i = 0;
    j = length - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            palindrome = 0;
            break;
        }

        i++;
        j--;
    }

    if (palindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}