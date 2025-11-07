
// 4. Write a program to find the GCD of two numbers using loops.

// The greatest common divisor (GCD) is the largest positive integer that divides two or more numbers exactly, without leaving a remainder. It is also known as the highest common factor (HCF) or greatest common factor (GCF). For example, the GCD of 8 and 12 is 4, because 4 is the largest number that divides both 8 and 12. 

#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the first number: ";
    cin>>a;
    int b;
    cout<<"Enter the second number: ";
    cin>>b;
    int gcd = 0;
    int small = 0;
    int big = 0;
    if (a>b){
        small = b;
        big = a;
    }
    else {
        small = a;
        big = b;
    }
    for (int i=1; i<=small; i++){
        if (small%i == 0){
            if (big%i == 0){
                if (i>gcd){
                    gcd = i;
                }
            }
        }
    }
    cout << gcd;

}