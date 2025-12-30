#include<iostream>
#include<vector>
using namespace std;

// Static Allocation of Memory -- During Compile
// Dynamic Allocation of Memory -- During Runtime

// Arrays -- Static
// Vectors -- Dynamic


// STL (std Template dib)

void vector_creation(){
    // vector<int> vec; //0
    // cout<<vec[0]; // Throws an error bcs there is nothing to print.


    vector<int> vec = {1, 2, 3, 4, 5};
    cout<< vec[0]<<endl;

    for(int val: vec){
        cout<<val<<endl;
    }

    vector<int> vec1(3, 0); //
    cout<<vec1[0]<<endl;

    return;

}

void vector_functions(){
    vector<int> vec = {1, 2, 3, 4, 5};

    cout<<"size: "<<vec.size()<<endl;
    vec.push_back(25); // add a value in last index
    cout<<"After push back, size: "<<vec.size()<<endl;

    vec.pop_back(); // delete last indexed value
    cout<<"After pop back, size: "<<vec.size()<<endl;

    cout<< vec.front()<<endl; // return first indexed value
    cout<< vec.back()<<endl; // return last indexed value

    cout<<vec.at(2)<<endl; // Compliment of vec[i]



    return;
}


int main(){
    vector_creation();

    vector_functions();

    return 0;
}