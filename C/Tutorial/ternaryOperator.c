#include <stdio.h>

int findMax(int x, int y){
    return (x > y) ? x : y;
}

int main() {
    // ternary operator: shorthand for if else statements
    // (condition) ? valueIfTrue : valueIfFalse

    int max = findMax(150, 85);

    printf("%d", max);

    return 0;
}