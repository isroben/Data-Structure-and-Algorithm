#include<iostream>
#include<vector>
using namespace std;

class Stacks{
    vector<int> v;

public:
    void push(int val){
        v.push_back(val);
    }
    void push(){
        v.pop_back();
    }
    int top(){
        return v[v.size() - 1];
    }
    bool empty(){
        return v.size() == 0;
    }
};

int main(){


    return 0;
}