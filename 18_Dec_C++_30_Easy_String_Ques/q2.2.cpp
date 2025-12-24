// Check if a string is palindrome
#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="abccba";
    int n = nums.size();
    // int count = 1;  -> Bro, here count variable is extra
    int i=0;
    int j=n-1;
    while (i<j){
        if (nums[i] != nums [j]){
            // count = 0;
            // break;
            cout << "Not a Palindrom";
            return 0;
        }
        i++;
        j--;
    }
    // if (count==1){
    //     cout << "Palindrom";
    // }
    // else{
    //     cout << "Not a Palindrom";
    // }
    cout << "Palindrom";
    return 0; 
}