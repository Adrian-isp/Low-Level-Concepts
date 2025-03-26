#include <iostream>

// C++ manual memory allocation on to the heap
// using NEW and DELETE keywords
// !!Potential for memory leaks!!

int main() {
    // dynamic heap allocation of an int:
    int *pNum = new int;

    // this is probably dangerous...
    std::cout << "Type a number to assign at pNum:\n";
    std::cin >> *pNum; // assigns value to memory address

    std::cout << "value stored at *pNum: " << *pNum << '\n';
    // IMPORTANT!!!
    delete pNum; // frees up the memory at the address


    // Allocating memory for an array:
    int n;
    std::cout << "Enter an amount of numbers for the array:\n";
    std::cin >> n;

    // dynamically allocate n amount of intager space
    int *array = new int[n];

    std::cout << "Enter every array number:\n";
    for(int i = 0; i < n; i++) {
        std::cin >> array[i]; //Enter array values
    }

    std::cout << "Array elements:\n";
    for(int i = 0; i < n; i++) {
        std::cout << array[i] << ' ';
    }
    delete[] array;  // DON'T FORGET TO DEALLOCATE MEMORY

    return 0;
}