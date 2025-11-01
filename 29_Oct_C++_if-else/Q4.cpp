
// Write a program to find the greatest of 3 numbers.

#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter a: "<<endl;
    cin>>a;
    int b;
    cout << "Enter b: "<<endl;
    cin>>b;
    int c;
    cout << "Enter c: "<<endl;
    cin>>c;
    if (a>b && a>c){
        cout<< a;
    }
    else if (b>a && b>c){
        cout<< b;
    }
}