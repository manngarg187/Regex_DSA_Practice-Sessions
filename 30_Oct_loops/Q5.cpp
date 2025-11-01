
// Write a program to calculate the factorial of a number

#include <iostream>
using namespace std;
int main(){
    int fact=1;
    int num;
    cout<< "Enter the number: " <<endl;
    cin>>num;
    for (int i=num;i>=1;i--){
        fact = fact*i;
    }
    cout<<fact;
}