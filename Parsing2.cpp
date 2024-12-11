#include <stdio.h>
#include <string.h>

void split_string(const char* input, char* delimiter) {
    const char* token = strchr(input, delimiter[0]);

    while (token != NULL) {
        printf("%s\n", input);
        input = token + 1;
        token = strchr(input, delimiter[0]);
    }
    printf("%s\n", input);
}

int main() {
    const char* str = "Hello,World";
    char delim[2] = ",";
    split_string(str, delim);
    return 0;
}