#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// include the header files into both the 
// main file AND the source file
#include "include/prime.h"

// for files in the same header use:
//  gcc main.c prime.c -o program

// for files in different directories use:
//  gcc -Iinclude main.c src/prime.c -o program

// run with:
//  ./program

void randomArray(int array[], int size) {
    srand(time(0));

    for(int i = 0; i<size; i++) {
        array[i] = rand() % 100;
    }
}

int main() {
    int arr[10];
    int size = 10;

    randomArray(arr, size);

    for(int i = 0; i < size; i++) {
        if(isPrime(arr[i]))
            printf("%d is a prime number.\n", arr[i]);
        else
            printf("%d is NOT a prime number.\n", arr[i]);
    }
}