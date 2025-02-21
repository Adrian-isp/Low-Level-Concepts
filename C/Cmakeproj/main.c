#include "include/arrayFunc.h"

int main() {
    int array[50];
    int size = 20;
    makeRandomArray(array, size);
    displayArray(array, size);

    return 0;
}