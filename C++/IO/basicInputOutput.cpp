#include <iostream>
// <iostream> = input/output stream header
//  contains the istream and ostream headers

// part of the standard library 
// and requires std namespace

int main() {
    std::string word1, word2;
    // cin - part of istream (input)
    std::cin >> word1 >> word2;
    
    // cout, cerr, clog - part of outstream

    // << - output operator
    // " " - string literal - constant

    // cout: used for display
    std::cout << "c output" << std::endl;
    std::cout << word1 << " " << word2 << std::endl;

    // cerr: used for exceptions
    std::cerr << "-C error" << std::endl;
    // clog: used for general data
    std::clog << "-C logging" << std::endl;

    return 0;
}