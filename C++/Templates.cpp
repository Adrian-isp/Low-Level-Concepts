#include <iostream>

// templates are a C++ feature
// that enable writing generic and reusable code

// they enable type flexibility 
// within functions and objects

// they are useful for containers, algorithms
// and utility functions like swapping and comparing

template <typename T>
void print(T text) {
    std::cout << text << std::endl;
}

template <typename T>
T maxvalue(T a, T b) {
    return (a > b) ? a : b;
}

int main() {

    print(1);
    print("carrots");
    print(3.14159);

    print(maxvalue('a', 'c'));
    std::cout << maxvalue(1.559, 5.27) << '\n';

    return 0;
}