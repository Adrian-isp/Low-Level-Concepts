#include <stdio.h>
#include <stdlib.h>

// Function pointers in C

// this enables passing functions as parameters
// of adding functions into structs

int add(int a, int b) {
    return a+b;
}

int multiply(int a, int b) {
    return a*b;
}

// pass functions as arguments for functions
void repeat(int reps, int(*func)(int, int)) {
    for(int i = 1; i<reps + 1; i++) {
        int answer = func(i, i);
        printf("a and b through func make: %d\n", answer);
    }
}

int main() {
    // turned the function add into a pointer  
    int (*function)(int, int) = add;

    printf("Function address: %p\n", function);

    // go through the multiply function 5 times:
    repeat(5, multiply);

    return 0;
}