#include <stdio.h>

int main() {
    /*  Pointer = a 'variable-like' reference that holds the memory address 
                to another variable, array etc.
                some tasks are performed more easily with pointers
        * = indirection operator (value at address)
     */

    //useless empty pointer
    void* ptr = NULL;
    //it's a good practice to assign as NULL when not initialising a pointer
    int* pAge = NULL;

    //address and value:
    int age = 21;
    pAge = &age;

    printf("value of age:        %d\n", age);
    printf("address of age:      %p\n", &age);

    printf("value of pAge:       %p\n", pAge);
    printf("dereference of pAge: %d\n", *pAge);

    printf("size of age:  %d\n", sizeof(age));
    printf("size of pAge: %d\n", sizeof(pAge));

    //pointers can be used as function parameters

    return 0;
}