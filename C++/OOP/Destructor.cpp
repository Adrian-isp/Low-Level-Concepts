#include <iostream>

class Obj {
    int* x;
    float* y;
public:
    // constructor allocating memory:
    Obj(int x, float y) {
        std::cout << "Entity created\n";
        this->x = new int(x);
        this->y = new float(y);
    }
    // destructor:
    ~Obj() {
        delete x;
        delete y;
        x = nullptr;
        y = nullptr;
        std::cout << "Heap items deleted\n";
    }
    void show() {
        std::cout << "items: " << *x << " and " << *y << '\n';
    }
};

int main() { 
    // construct the object
    Obj object(15, 12.5f);
    // elements in object:
    object.show();

    // the object gets automatically destroyed

    return 0;
}