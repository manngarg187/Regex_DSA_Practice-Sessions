
// 2. Write a program to determine if three sides can form a valid triangle. 

#include <iostream>
using namespace std;
int main(){
    // A triangle is valid if the sum of the lengths of any two sides is greater than the length of the third side, a rule known as the Triangle Inequality Theorem

    int a;
    cout << "Enter the lenght of 1st side: "<< endl;
    cin >> a;
    int b;
    cout << "Enter the length of 2nd side: " << endl;
    cin >> b;
    int c;
    cout << "Enter the lenght of 3rd side: " << endl;
    cin >> c;

    if (a+b>c && a+c>b && b+c>a){
        cout << "Valid Triangle";
    }
    else {
        cout << "Invalid Triangle";
    }
}

