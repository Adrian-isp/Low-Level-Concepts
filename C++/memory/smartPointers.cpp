#include <iostream>
#include <memory>

// Smart pointers handle heap allocation automatically.
// They increase memory safety

// unique_ptr - used for single or exclusive ownership of a resource
//              CANNOT be copied


class Obj {
public:
    void output() {
        std::cout << "Object method example\n";
    }

};

int main() {
    // make a unique pointer within a scope
    {
        // unique_ptr<type> name = make_unique<type>();
        std::unique_ptr<Obj> object = std::make_unique<Obj>();
        // alternative also works but not recommended 
        // due to exception safety:
        // std::unique_ptr<Obj> object(new Obj);
        object->output();
    }
    std::cout << "Object and unique pointer are deleted\n";

    std::weak_ptr<Obj> weak;
    // make a shared pointer
    {
        std::shared_ptr<Obj> object2;
        {   
            // shared pointers keep a reference count of all pointers
            // make_shared is necessary
            std::shared_ptr<Obj> object = std::make_shared<Obj>();
            // enables copying and sharing ownership
            object2 = object;
            // weak pointers hold a reference to an 
            // item without actually owning it (increasing ref count)
            weak = object;

            object->output();
        }
        // only when the last reference is left unused the pointer is deleted
        object2->output();

        std::cout << "object ptr now deleted\n";
    }
    std::cout << "Only now, object2 gets deleted\n";
    std::cout << "Weak pointer is expired\n";


    return 0;
}