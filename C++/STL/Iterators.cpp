#include <iostream>
#include <vector>
#include <unordered_set>

// iterators are objects that provide 
// access to each item in a collection

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

    std::unordered_set<int> set;
    set.emplace(12);
    set.emplace(3);
    set.emplace(256);
    set.emplace(76);
    set.emplace(888);

    // this allows traversing unordered data structures like 
    // unordered sets:
    for(std::unordered_set<int>::const_iterator it = set.begin();
        it != set.end(); it++) {
            std::cout << *it << '\n';
    }

    return 0;
}