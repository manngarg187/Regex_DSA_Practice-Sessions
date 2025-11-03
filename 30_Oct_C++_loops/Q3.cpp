
// Write a program to print the multiplication table of a number entered by the user

#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    for (int i=1; i<=10; i++){
        cout<< a << " * " << i << " = " << a*i << endl;
    }
}