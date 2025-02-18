#include <stdio.h>

int main() {
    // matrices are pointers to pointers
    // you can index arrays and matrices by dereferencing pointers
    int matrix[3][3] = {{3, 4, 5}, {12, 16, 20}, {23, 46, 69}};

    printf("matrix: %p\n", matrix);

    printf("first  line: %p\n", *matrix);
    printf("second line: %p\n", *(matrix + 1));

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            printf("%2d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }

    return 0;
}