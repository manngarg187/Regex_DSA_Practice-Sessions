#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    int b;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    int c;
    a = a+b;
    b = a-b;
    a = a-b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}