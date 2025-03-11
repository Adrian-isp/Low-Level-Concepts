#include <iostream>

// C++ namespaces provide a 
// method for preventing naming
// conflicts in large projexts 

namespace math {
    int numbers = 12;

    int add(int a, int b) {
        return a+b;
    }
    int multiply(int a, int b) {
        return a*b;
    }
}

int main() {
    int a = 15;
    int b = 12;

    std::cout << math::add(a, b) << '\n';
    std::cout << math::multiply(a,b) << '\n';
}