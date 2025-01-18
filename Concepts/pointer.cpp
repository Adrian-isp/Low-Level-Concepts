#include <iostream>
/*
Pointers: used to hold the address of a variable:
'&' - address of operator
'*' - dereference operator (for declared pointers) 
*/
int main(){
    //intager:
    int a;
    //pointer declaration (holding reference to a) 
    int* pa = &a;

    std::cin >> a;

    std::cout << "Value of a: " << a << "\nPointer dereference: " << *pa << '\n';
    std::cout << "Address of a: " << &a << "\npointer to a: " << pa << '\n';

    //pointer dereference and assigning a new value
    *pa = 100;
    
    std::cout << "New value of a's pointer: "<< *pa << '\n';
    std::cout << "New value of a: " << a;

    return 0;
}