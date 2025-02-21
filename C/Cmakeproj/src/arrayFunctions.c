#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../include/arrayFunc.h"

void makeRandomArray(int arr[], int dimension) {
    srand(time(0));

    for(int i = 0; i < dimension; i++) {
        arr[i] = rand() % 100;
    }
}

void displayArray(int arr[], int dimension) {
    for(int i = 0; i < dimension - 1; i++) {
        printf("%3d, ", arr[i]);
    }
    printf("%3d", arr[dimension-1]);
}