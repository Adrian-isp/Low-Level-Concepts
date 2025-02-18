#include <stdio.h>

int main() {
    // char pointer arrays are by default constant and can't be changed
    // they can be indexed
    // as arrays are just pointers to the beginning of an sequence

    // pointer size is 8 bytes (a 64 bit address)
    // array size is 15 bytes (size of all characters)

    const char* string = "alakazam hachoo";
    char array[15] = "abracadabra\0";

    printf("pointer string: %s\n", string);
    printf("pointer index:  %c\n", string[2]);
    printf("string pointer: %p\n", string);
    printf("pointer size(bytes): %d\n", sizeof(string));

    printf("char array:    %s\n", array);
    printf("array address: %p\n", array);
    printf("array size(bytes): %d\n", sizeof(array));

    return 0;
}