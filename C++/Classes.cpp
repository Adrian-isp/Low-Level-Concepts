#include <iostream>

// Classes: blueprints for creating objects
// can be used to store attributes for real life things (members)

class Car {
public:
    std::string model;
    int number;
    int year;

    void drive() {
        std::cout << "You're driving the car.\n";
    }

    void specify(std::string carModel, int carNumber, int productionYear) {
        model = carModel;
        number = carNumber;
        year = productionYear;
    }

    void display() {
        std::cout << "Model: "    << model
                  << "\nNumber: " << number
                  << "\nYear: "   << year << '\n';
    }
};

int main() {
    Car toyota;

    toyota.specify("Lancer Evolution", 777, 2008);

    toyota.drive();
    
    toyota.display();

    return 0;
}