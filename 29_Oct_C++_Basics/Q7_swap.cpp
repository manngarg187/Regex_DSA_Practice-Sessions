#include <iostream>
using namespace std;
int main(){
    string a;
    cout << "Enter the first name: " << endl;
    cin >> a;
    string b;
    cout << "Enter the second name: " << endl;
    cin >> b;
    swap (a,b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}