// check if a string is palindrome or not

#include <iostream>
#include <string>


using namespace std;
int main(){
    string s = "mngkgnm";
    int temp = 1;
    int i = 0;
    int j = s.size() - 1;
    while (i<j){
        if (s[i] != s[j]){
            temp = 0;
            break;
        }
        i++;
        j--;
    }
    if (temp == 1){
        cout << "Palindrome";
    }
    else {
        cout << "Not a palindrome";
    }

}