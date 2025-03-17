#include <stdio.h>
#include <stdlib.h>

// functions related to the memory
// are included in the stdlib.h header

// malloc() - allocates unitialised memory
// calloc() - contiguously allocates and initialises memory to zero
// realloc() - resizes previously allocated memory 
// free() - releases dynamically allocated memory

int main() {
    // example allocating memory for 5 intagers:
    int* arr = (int *)malloc(sizeof(int));

    if(arr == NULL)
        printf("Failed memory allocation\n");
    // returns NULL if allocation fails
    for(int i = 0; i < 5; i++) {
        arr[i] = i+1;
    }
    
    printf("%d\n", arr[1]);

    // always free pointers
    free(arr);
    arr = NULL;

    return 0;
}