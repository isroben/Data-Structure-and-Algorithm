#include <iostream>

inline int product(int a, int b){
    static int c = 0;
    c = c + 1;
    return a*b+c;
}

float moneyReceived(int curr, float factor=1.04){
    return curr * factor;
}

int strlen(const char* p){ // to avoid change inside the func
    
}


int main(){
    int a, b;
    // std::cout<< "Enter the value of a and b" <<std::endl;
    // std::cin>> a >> b;

    // std::cout<< "The product of a and b is: "<< a*b <<std::endl;

    // std::cout<< product(a, b) <<std::endl;
    // std::cout<< product(a, b) <<std::endl;
    // std::cout<< product(a, b) <<std::endl;
    // std::cout<< product(a, b) <<std::endl;

    int money = 100000;

    std::cout<< "For VIP, If you have "<< money << ", You'll receive "<<moneyReceived(money, 1.1) <<std::endl;
    return 0;
}