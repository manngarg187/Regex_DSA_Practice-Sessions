
// 6. Write a program to check if a given number lies between 50 and 100.

#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter the number: " << endl;
    cin>>a;
    if (a>50 && a<100){
        cout << "the number liew b/w 50 & 100";
    }
    else {
        cout << "Doesn't lie b/w 50 & 100";
    }
}