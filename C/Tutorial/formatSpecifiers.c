#include <stdio.h>

int main(){
    //format specifier % - defines and formats a type of data to be displayed

    // %c - character
    // %s - string (array of characters)
    // %f - float
    // %lf- double
    // %d - intager

    // %.1 = decimal precision
    // %1  = minimum field width
    // %-  = left allign

    float item1 = 1.2567;
    float item2 = 1256.54;
    float item3 = 100.9;

    printf("value is equal to $%8.2f \n", item1);
    printf("value is equal to $%8.2f \n", item2);
    printf("value is equal to $%-.2f \n", item3);


    return 0;
}