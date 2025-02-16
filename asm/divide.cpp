#include <iostream>

int main() {
    int y = 25;
    int k = 0;

    while(y > 0) {
        y -= 5;
        k++;
    }

    std::cout << k;

    return 0;
}