#include <iostream>
#include <vector>
#include <algorithm>

// Algorithm is a STL collection of algorithms
// designed to work with various container classes

int main() {
    std::vector<int> arr = {15, 20, 33, 72, 12, 47, 72};
    std::vector<int> arrcopy = arr;

    // sorting algorithms:
    std::sort(arrcopy.begin(), arrcopy.end());

    for(int num : arrcopy)
        std::cout << num << ' ';
    std::cout << '\n';

    // search algorithms: find, binary_search, find_if
    auto it = std::find(arr.begin(), arr.end(), 12);

    if(it != arr.end()) 
        std::cout << "Item found\n";
    else
        std::cout << "Item not found\n";

    // modifying sequences: remove, replace, unique
    arrcopy.erase(
        std::remove(arrcopy.begin(), arrcopy.end(), 72),
        arrcopy.end()
    );

    for(int num : arrcopy)
        std::cout << num << ' ';
    std::cout << '\n';

    return 0;
}