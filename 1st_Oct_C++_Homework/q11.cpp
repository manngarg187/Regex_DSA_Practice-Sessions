
// 1. Write a program to find the sum of all even numbers between two user-given limits.

#include <iostream>
using namespace std;
int main(){
    int lower;
    cout << "Enter the lower limit: ";
    cin>> lower;
    int upper;
    cout << "Enter the upper limit: ";
    cin>> upper;
    int sum = 0;
    for (int i=lower; i<=upper; i++){
        if (i%2==0){
            sum = sum + i;
        }
    }
    cout << sum;
}