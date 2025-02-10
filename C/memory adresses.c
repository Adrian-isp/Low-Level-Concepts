#include <stdio.h>

int main(){
    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to store data (person)
    // memory address = the address of where a memory is located in memory(home address)

    char a = 'x';
    char b = 'y';
    char c[] = "zam";

    printf("a = %d bytes\n", sizeof(a));
    printf("b = %d bytes\n", sizeof(b));
    printf("c = %d bytes\n\n", sizeof(c));

    //pointers are stored in hexadecimal values
    printf("&a = %p\n", &a);
    printf("&b = %p\n", &b);
    printf("&c = %p\n", c);

    return 0; 
}