#include <stdio.h>

int main() {
    // incrementing a pointer automatically moves to the next element
    // regardless of the data type size (int - 4 bytes)
    // pros: - often faster
    //       - can be optimised better
    //       - good for dynamic memory access
    // cons: - it is harder to read
    //       - can overstep memory bounds

    int array[] = {1,3,5,7,15,27,14,12};
    int matrix[3][3] = {{15,17,81}, {45,13,26}, {43,22,5}};

    // looping through array using pointers directily:
    for(int* ptr = array; ptr < array + 8; ptr++){
        printf("%02d ", *ptr);
    }
    printf("\n");

    // looping through a matrix array linearly
    int* pMat = &matrix[0][0];

    for(int i = 0; i < 9; i++){
        printf("%02d ", *(pMat + i));
    }

    return 0;
}