// 1. Remove Duplicates From a String (Preserve Order)

// Description: You are given a string s. Your task is to remove all duplicate characters from the string while preserving the order of first appearance. Return the new string.

// Examples:
// 1. Input: "aabbccd" → Output: "abcd"
// 2. Input: "hello" → Output: "helo"
// 3. Input: "abcabc" → Output: "abc"
// 4. Input: "mississippi" → Output: "misp"
// 5. Input: "zzzz" → Output: "z"

// 3rd approach using set (normal set)
#include <iostream>
#include <map>
#include <string>
#include <set>
using namespace std;
int main(){
    string s="aabbccd";
    set <char> seen;
    string ans="";
    for (auto x:s){
        if (seen.find(x)==seen.end()){
            ans+=x;
            seen.insert(x);
        }
    }
    cout << ans;
}