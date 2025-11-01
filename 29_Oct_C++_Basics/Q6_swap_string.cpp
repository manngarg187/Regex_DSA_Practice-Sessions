#include <iostream>
using namespace std;
int main(){
    string a;
    cout << "Enter the first name: " << endl;
    cin >> a;
    string b;
    cout << "Enter the second name: " << endl;
    cin >> b;
    string c = "";
    c = a;
    a = b;
    b = c;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}