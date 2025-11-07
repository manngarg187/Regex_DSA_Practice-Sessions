
// 2. Write a program to check if a number is a palindrome using a loop. 

#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int rev = 0;
    int num_1 = num;
    while (num>0){
        rev = rev*10 + num%10;
        num = num/10;
    }
    if (rev == num_1){
        cout << "Yes, it's a palindrome";
    }
    else {
        cout << "NO, it's not a palindrome";
    }
}