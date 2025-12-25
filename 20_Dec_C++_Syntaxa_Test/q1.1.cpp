// 1. Remove Duplicates From a String (Preserve Order)

// Description: You are given a string s. Your task is to remove all duplicate characters from the string while preserving the order of first appearance. Return the new string.

// Examples:
// 1. Input: "aabbccd" → Output: "abcd"
// 2. Input: "hello" → Output: "helo"
// 3. Input: "abcabc" → Output: "abc"
// 4. Input: "mississippi" → Output: "misp"
// 5. Input: "zzzz" → Output: "z"

#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    string s="aabbccd";
    // map <char,int>m;
    // for (auto x:nums){
    //     m[x]++;
    // }
    // string ans="";
    // for (auto x:m){
    //     ans=ans+x.first;
    // }
    // cout<<ans;
    int n=s.size();
    string ans="";
    for (int i=0; i<n; i++){
        int check=1;
        for (auto x:ans){
            if (s[i]==x){
                check=0;
            }
        }
        if (check==1) ans=ans+s[i];
    }
    cout << ans;
}