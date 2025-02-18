#include <stdio.h>

int main(){
    // Bitwise operators: used to manipulate binary bits in memory
    /*
        & - AND
        | - OR
        ^ - XOR
        >> - right shift
        << - left shift
        ~ - complement
    */
    int x = 6;  // 6 = 00000110 06
    int y = 12; //12 = 00001100 0c
    int z = 0;  // 0 = 00000000 00

    printf("z0  = %d\n", z);

    z = x & y;       //00000100
    printf("AND = %d\n", z);

    z = x | y;       //00001110
    printf("OR  = %d\n", z);

    z = x ^ y;       //00001010
    printf("XOR = %d\n", z);

    //add bitshifts 
    z = x << 1;      //00001100
    printf("bitshift left  x = %d\n", z);

    z = x >> 1;      //00000011
    printf("bitshift right x = %d\n", z);

    z = ~x;     //-7 = 11111001
    printf("complement of  x = %d\n", z);

    return 0;
}