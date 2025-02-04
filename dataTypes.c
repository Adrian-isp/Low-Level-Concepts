#include <stdio.h>
#include <stdbool.h>

int main(){
    char a = '&';           // 1 byte - single character %c
    char b[] = "string";    // array of characters       %s

    float c = 1.45;             // 4 bytes (32 bits of precision) 6-7 digits  %f
    double d = 3.141592653589;  // 8 bytes (64 bits of precision)15-16 digits %lf

    bool e = true;          // 1 byte true/false        %d

    char f = 'i';           // 1 byte (-128 to 127 ASCII) %d / %c
    unsigned char g = 97;   // 1 byte (0 to 255 ASCII)    %d / %c

    short h = 110;          // 2 bytes (-32k, 32k)      %d 
    unsigned short i = 1000;// 2 bytes (0 to 65,535)    %d

    int j = 2000000000;     // 4 bytes (2,147,483,648 to 2,147,483,647) %d
    unsigned int k = 4000000000;   // 4 bytes (0 to 4 billion)          %u

    long long int l = 9100100100100100100; // 8 bytes (-9 quintillion to 9 quintillion) %lld
    unsigned long long int m = 18100100100100100100U; // 8 B (0 to 18 quintillion)      %llu 

    printf("%0.12f\n", c);  //float inaccuracies are observable
    printf("%0.12lf\n", d);

    printf("%c\n", g);

    printf("%d\n", j);
    printf("%u\n", k);

    printf("%lld\n", l);
    printf("%llu\n", m);

    return 0;
}