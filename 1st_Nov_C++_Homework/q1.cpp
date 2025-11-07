
// Write a program to check whether a number is divisible by 7 or 11. 

#include <iostream>
using namespace std;
int main(){
    int a;
    cout<< "Enter the Number: " << endl;
    cin >> a;
    if (a%7==0 || a%11==0){
        cout << "Yes, the number is divisible by 7 or 11";
    }
    else{
        cout << "No, the number is not divisible by 7 or 11";
    }
}