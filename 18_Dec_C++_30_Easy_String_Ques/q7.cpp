// remove spaces from a string
#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="abc  DU kLf g";
    int n=nums.size();
    string ans="";
    // for (auto x:nums){
    for (auto x:nums){
        if (x!=' ') ans=ans+x;
    }
    cout << ans;
}