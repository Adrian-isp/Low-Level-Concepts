#include <iostream>

// Constructor in C++

// this keyword used to access the class
// attributes specifically, helping with
// naming conflicts in constructors

class Car {
public:
    std::string brand;
    std::string model;
    int year;

    Car(std::string brand, std::string model, int year) {
        std::cout << "Car object created\n";
        this->brand = brand;
        this->model = model;
        this->year = year;
    }

    void accelerate() {
        std::cout << "The " << model 
                  << " is going faster.\n";
    }
};

int main() {
    Car honda("Honda", "Civic", 2008);

    honda.accelerate();

    return 0;
}