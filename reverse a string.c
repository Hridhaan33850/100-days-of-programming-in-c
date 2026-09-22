#include <stdio.h>

int main() {
    char str[100], temp;
    int i, j, length = 0;

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
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}