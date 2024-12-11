#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void trim(char* str) {
    size_t len = strlen(str);
    while (str[len - 1] == ' ') {
        str[len - 1] = '\0';
        len--;
    }
    // Ensure we trimming the space from left in case the entire string was space
    while (len > 0 && str[0] == ' ') {
        memmove(str, str + 1, len);
        len--;
    }
}

int countStrings(char* input) {
    const char* s = strtok(input, " ");
    int count = 0;
    while (s) {
        count++;
        s = strtok(NULL, " ");
    }
    return count;
}

int main() {
    char str[] = " Hello World!  ";

    // Printing the original string
    printf("Original string: %s\n", str);

    // trims spaces
    trim(str);
    printf("Trimmed string: %s\n", str);

    // Splitting and counting strings
    int numStrings = countStrings(str);
    printf("Number of strings: %d\n", numStrings);

    return 0;
}