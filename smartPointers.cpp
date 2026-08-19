#include <iostream>
#include <string>
#include <memory>
using namespace std;

void function(){
    unique_ptr<int> p1 (new int(33)); // creating unique pointer

    p1.reset(new int(10)); // to reset the value stored

    unique_ptr<int> p2;

    p2 = std::move(p1); // moving ownerships

    // cout<< *p1 <<endl; // gives segmt fault
    cout<< *p2 <<endl;
}

// Behaviours of smart pointers
class Entity{
public:
    Entity(){
        std::cout<< "Created Entity" <<std::endl;
    }
    ~Entity(){
        std::cout<< "Destroyed Entity" <<endl; 
    }
};


int main(){

    function();

    {
        // std::unique_ptr<Entity> entity(new Entity());

        std::unique_ptr<Entity> entity = std::make_unique<Entity>();
    }

    std::cin.get();

    return 0;
}