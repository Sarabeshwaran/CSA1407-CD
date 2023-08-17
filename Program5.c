INPUT:

#include <stdio.h>

int main() {
    char input[1000];  // Assuming a maximum input size of 1000 characters
    printf("Enter a string:\n");
    fgets(input, sizeof(input), stdin);

    int whitespaceCount = 0;
    int newlineCount = 0;
    int i;

    for ( i = 0; input[i] != '\0'; i++) {
        if (input[i] == ' ') {
            whitespaceCount++;
        } else if (input[i] == '\n') {
            newlineCount++;
        }
    }

    printf("Number of whitespaces: %d\n", whitespaceCount);
    printf("Number of newline characters: %d\n", newlineCount);

    return 0;
}

OUTPUT:

Enter a string:
Sarabesh waran kdnk
Number of whitespaces: 2
Number of newline characters: 1
