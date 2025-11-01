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
    c = a;
    a = b;
    b = c;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}