// Find length of string without using length() function.

#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="abcDUkLfg";
    int n=nums.size();
    int count=0;
    // for (auto x:nums){
    for (auto x:nums){
        count++;
    }
    cout << count;
}