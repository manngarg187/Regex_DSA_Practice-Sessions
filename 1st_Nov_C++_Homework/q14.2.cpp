
// More efficient way of writing the previous code written in q14.1.cpp :

// 4. Write a program to find the GCD of two numbers using loops.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    int gcd = 1;
    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    cout << "The GCD of " << a << " and " << b << " is: " << gcd << endl;
    return 0;
}
