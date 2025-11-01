
// Write a program to tell weather the number is positive, negative, zero

#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    if (a>0){
        cout<<"Positive";
    }
    else if (a== 0){
        cout<<"Zero";
    }
    else {
        cout << "Negative";
    }
}
