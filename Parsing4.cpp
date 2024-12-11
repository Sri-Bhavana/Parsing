#include <stdio.h>
#include <stdlib.h>

int main() {
    const char* str = "123 main street";
    char* p;

    int number = strtol(str, &p, 10);
    if (p != str) {
        printf("Number: %d\n", number);
    }

    char* city = p + 1;
    printf("City: %s\n", city);

    return 0;
}