#include <stdio.h>

int main(){
    // Bitwise operators: used to manipulate binary bits in memory
    /*
        & - AND
        | - OR
        ^ - XOR
        >> - right shift
        << - left shift     
    */
    int x = 6;  // 6 = 00000110 06
    int y = 12; //12 = 00001100 0c
    int z = 0;  // 0 = 00000000 00

    printf("z0  = %d\n", z);

    z = x & y;
    printf("AND = %d\n", z);

    z = x | y;
    printf("OR  = %d\n", z);

    z = x ^ y;
    printf("XOR = %d\n", z);

    //add bitshifts 
    z = x << 1;
    printf("bitshift right x = %d\n", z);

    z = x >> 1;
    printf("bitshift left x = %d", z);

    return 0;
}