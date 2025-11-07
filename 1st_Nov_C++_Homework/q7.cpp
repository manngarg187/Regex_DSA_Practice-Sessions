
// 7. Write a program to determine the type of roots of a quadratic equation using discriminant.

#include <iostream>
using namespace std;
int main(){
    cout << "Conside a quadratic equation as ax^2 + bx + c = 0 , then enter the value of a,b,c to find the type of discriminant" << endl << endl;

    cout << "Formula of discriminant is: D = b^2 - 4ac " << endl;

    int a,b,c;
    cout<< "Enter the value of a : "<< endl;
    cin>>a;
    cout<< "Enter the value of b : "<< endl;
    cin>>b;
    cout<< "Enter the value of c : "<< endl;
    cin>>c;
    int D;
    D = (b*b) - (4*a*c) ;
    if (D>0){
        cout << "Two distinct real roots";
    }
    else if (D==0){
        cout << "One real repeated roots";
    }
    else {
        cout << "two complex conjugate roots";
    }
}