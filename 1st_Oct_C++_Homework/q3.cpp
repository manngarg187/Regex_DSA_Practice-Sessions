
// 3. Write a program to calculate the absolute value of a number without using abs().

#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter the number: ";
    cin >> a;
    if (a>=0){
        cout << a;
    }
    else {
        cout << a*(-1);
    }
}