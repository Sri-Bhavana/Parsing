#include <stdio.h>
#include <string.h>

void trim_string(char* str) {
    char* start = str;
    char* end = strrchr(str, '\0') - 1;

    /* Trim leading spaces */
    while (*start == ' ' && start < end)
        start++;

    /* Trim trailing spaces */
    while (end >= start && *end == ' ')
        end--;

    /* Null-terminate the trimmed string */
    if (end >= start)
        end[1] = '\0';
    else
        str[0] = '\0';
}

int main() {
    char str[] = " Hello World ";
    printf("Original: %s\n", str);
    trim_string(str);
    printf("Trimmed: %s\n", str);
    return 0;
}