#include <iostream>
#include <sstream>

// <sstream> header
// stringstream class of the c++ STL

// it allows manipulation of strings outside of the console
// Parsing and fomratting

int main() {

    std::cout << "Type in a number:\n";
    
    int num;
    std::cin >> num;

    std::stringstream ss;
    // Write the number onto the stream
    ss << num;
    // Read the number into the strnum string
    std::string strnum;
    ss >> strnum;
    std::cout << "number as string: " << strnum
              << std::endl
              << "size: " << sizeof(strnum) 
              << '\n';
    std::cout << "size of intager: " << sizeof(num)
              << '\n';

    // clear and reset stringstream
    ss.str("");
    ss.clear();


    // Read CSV data with custom delimiters:
    std::string input = "Adrian, 21, BigBoss";
    std::stringstream sts(input);

    std::string name, age, title;

    std::getline(sts, name, ' ');
    std::getline(sts, age, ' ');
    std::getline(sts, title, ' ');

    std::cout << "name " << name 
              << "\nage " << age
              << "\ntitle " << title;

    
    
    return 0;
}