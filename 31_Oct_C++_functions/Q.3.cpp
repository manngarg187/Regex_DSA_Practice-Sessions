
// Function with parameter by taking value from user

#include <iostream>
using namespace std;

int addition(int a, int b){
    return a+b;
}

int main(){
    int c;
    cout << "Enter 1st value: "<<endl;
    cin >> c;
    int d;
    cout << "Enter 2nd value: " << endl;
    cin >> d;
    
    cout << addition(c,d);
}