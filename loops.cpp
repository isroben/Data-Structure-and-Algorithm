#include <iostream>
using namespace std;

// int main(){
//     int i = 1;

//     while(i <= 10){
//         cout <<i;
//         i++;
//     }

//     return 0;
// }


// For Loops

int main(){
    // int n = 10;
    // for(int i=0; i<=n; i++){
    //     cout<< i <<' ';
    // }


    // Q. Sum of numbers from 1 to n.
    // int sum = 0;
    // int n = 5;
    // for(int i=1; i<=n; i++){
    //     cout << i <<endl;
    //     sum += i;
    // }
    // cout<< sum;


    // Q. Sum of all Odd numbers from 1 ton N.
    // int sum = 0;
    // int n = 10;
    // for (int i= 1; i<=n; i++){
    //     if(i%2 != 0){
    //         sum += i;
    //     }
    //     else{
    //         continue;
    //     }
    // }
    // cout <<sum;

    // Alternate solution
    int sum = 0;
    int n = 10;
    for (int i=1; i<=n; i+=2){
        cout<< i;
        sum += i;
    }
    cout<< sum;

    return 0;
}