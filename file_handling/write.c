#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int i;
    FILE *fp = NULL;
    char str[100]; // Increased the size of the string buffer for safer input

    fp = fopen("book.txt", "w");
    if (fp == NULL) {
        printf("Error opening the file.\n");
        exit(1);
    }

    printf("Enter the string: ");
    // Use fgets to safely read a string from the user
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character if it exists
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    for (i = 0; i < strlen(str); i++) {
        fputc(str[i], fp);
    }

    fclose(fp);

    return 0;
}

