#include <stdio.h>
#include <ctype.h>

int main() {
    char statement[1000];
    int count = 0, i;

    printf("Enter a statement: ");
    fgets(statement, 1000, stdin);

    for (i = 0; statement[i] != '\0'; i++) {
        if (!isalnum(statement[i]) && !isspace(statement[i])) {
            count++;
        }
    }

    printf("Number of special characters in the statement: %d\n", count);

    return 0;
}