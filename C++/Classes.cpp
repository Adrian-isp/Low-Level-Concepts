#include <iostream>

// Classes: blueprints for creating objects
// can be used to store attributes for real life things (members)

// class definiton:
class Car {
    // by default, class access is set private
    // (items can't be accessed from outside the class)
    int km = 0;

public:
    // class attributes (variables stored):
    std::string model;
    int number;
    int year;

    // methods (class functions)
    void drive() {
        std::cout << "You're driving the car.\n";
        km += 5;
        std::cout << "You drove for " << km << " kilometers!\n";
    }

    void specify(std::string carModel, int carNumber, int productionYear) {
        // initialising attributes
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
    // class member initalisation
    Car toyota;

    // accessing methods via '.' operator
    toyota.specify("Lancer Evolution", 777, 2008);

    toyota.drive();
    
    toyota.display();

    // access public attributes:
    std::cout << "class member value access: " << toyota.model;

    return 0;
}