#include <iostream>
#include <sstream>

int main() {

    std::cout << "Type in a number:\n";
    
    int num;
    std::cin >> num;

    std::stringstream ss;
    // read the number on the string stream
    ss << num;
    // write the number on a string variable
    std::string strnum;
    ss >> strnum;
    std::cout << "number as string: " << strnum
              << std::endl
              << "size: " << sizeof(strnum) 
              << '\n';
    std::cout << "size of intager: " << sizeof(num)
              << '\n';

    // change the type of the data:
    ss << num;
    std::string val;
    ss >> val;
    std::cout << val << " value";

    return 0;
}