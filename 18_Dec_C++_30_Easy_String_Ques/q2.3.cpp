// Check if a string is palindrome
#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="abccba";
    string rev="";
    int n = nums.size();
    for (int i=n; i>=0; i--){
        rev = rev + nums[i];
    }
    if (nums==rev){
        cout << "Palindrome";
    }
    else {
        cout << "Not a Palindrome";
    }
}