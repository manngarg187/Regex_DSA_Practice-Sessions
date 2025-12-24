// Reverse a string
#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="abcdefg";
    string rev="";
    int n=nums.size();
    for (int i=n; i>=0; i--){
        rev = rev+nums[i];
    }
    cout << rev;
}