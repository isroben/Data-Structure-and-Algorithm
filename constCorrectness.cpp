#include<iostream>
#include<string>

// 2. In Classes and Methods
class Entity{
private:
    int m_X, m_Y;
public:
    int GetX() const{ // This method is not able to modify any of the actual class -- GetX() is Read Only method
        // m_X = 100; -- throws an error

        return m_X;
    }
};

int main(){
    const int MAX_AGE = 100;

    // Use cases of const
    // 1. pointer
    // declared in Heap
    const int* a = new int; // This method allows to change the pointer adress but not value inside the pointer address
    int* const b = new int; // This method allows to change the value inside the pointer address but not pointer adress

    // *a = 4; -- throws an error

    // Note: we can change the pointer adress but not content of pointer.
    a = (int*)&MAX_AGE;

    // b = nullptr; -- throws an error
    *b = 10; // Note: we can change value but not the pointer address.

    std::cout << *a << std::endl;
    std::cout << *b << std::endl;

    

    return 0;
}