#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr;

    arr.push_back(12);
    arr.push_back(3);
    arr.push_back(256);
    arr.push_back(76);
    arr.push_back(888);

    // it is and iterator used to the traverse the vector
    // it is dereferenced when printing to give the value
    for(std::vector<int>::const_iterator it = arr.begin();
        it != arr.end(); it++) {
            std::cout << *it << '\n';
    }

    return 0;
}