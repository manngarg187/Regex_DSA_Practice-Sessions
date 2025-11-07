
// 4. Write a program to check if a character entered is uppercase, lowercase, digit, or special character.

#include <iostream>
using namespace std;
int main(){
    char check;
    cout << "Enter the character: "<< endl;
    cin>> check;

    if (check >= 'A' && check <= 'Z'){
        cout << "Uppercase";
    }
    else if (check >= 'a' && check <= 'z'){
        cout << "Lowercase";
    }
    // else if (check >= -9 && check <= 9){
    // else if (check >= 0 && check <= 9){    - Mistake: You are missing the inverted commas
    else if (check >= '0' && check <= '9'){
        cout << "Digit";
    }
    else {
        cout << "special character";
    }
}