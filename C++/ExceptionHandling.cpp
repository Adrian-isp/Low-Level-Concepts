#include <iostream>

// C++ Error Handling
// using 3 keywords:

// try
// catch
// throw

int division(int a, int b) {
    if(b == 0) {
        // the throw keyward is used to
        // start exceptions which
        // unhandled, terminate programs
        throw "Division by zero!";
    }

    return a/b;
}

int main() {
    int a, b;

    std::cout << "Enter two numbers to divide:\n";
    std::cin >> a >> b;
    
    // the try block attempts executing a 
    // set of instructions enabling error handling
    // using the catch keyword
    try {
        int result = division(a, b);
        std::cout << "The result is " << result << '\n';
    }
    // the error thrown is a string litteral, 
    // stored in the message variable
    // std::cerr gives out the error 
    // message in the console
    catch(const char* message) {
        std::cerr << "Error message: " << message << '\n';
    }

    return 0;
}