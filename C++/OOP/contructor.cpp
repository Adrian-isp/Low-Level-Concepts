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

    // constructors enable initialising the class values
    Car() {
        brand = "none";
        model = "none";
        year = 0;
    }
    // overloading enables setting initial values according 
    // what we enter
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
    // no function call needed for initialisation
    Car car;
    Car honda("Honda", "Civic", 2008);

    honda.accelerate();

    std::cout << "Default brand: " << car.brand << '\n';
    std::cout << "Instance brand: " << honda.brand << std::endl;

    return 0;
}