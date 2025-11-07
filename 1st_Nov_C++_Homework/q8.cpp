
// 8. Write a program to find the smallest among three numbers using nested if.

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter 1st number: " << endl;
    cin >> a;
    cout << "Enter 2nd number: " << endl;
    cin >> b;
    cout << "Enter 3rd number: " << endl;
    cin >> c;
    if (a<b){
        if (a<c){
            cout << a;
        }
        else {
            cout << c;
        }
    }
    else {
        if (b<c){
            cout << b;
        }
        else {
            cout << c;
        }
    }
}