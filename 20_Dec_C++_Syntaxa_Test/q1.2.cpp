// 1. Remove Duplicates From a String (Preserve Order)

// Description: You are given a string s. Your task is to remove all duplicate characters from the string while preserving the order of first appearance. Return the new string.

// Examples:
// 1. Input: "aabbccd" → Output: "abcd"
// 2. Input: "hello" → Output: "helo"
// 3. Input: "abcabc" → Output: "abc"
// 4. Input: "mississippi" → Output: "misp"
// 5. Input: "zzzz" → Output: "z"

// 2nd Approach using unordered set
#include <iostream>
#include <map>
#include <string>
// #include <unordered_map> -> I picked the wrong library!
#include <unordered_set>
using namespace std;
int main(){
    string s="aabbccd";
    unordered_set <char> seen;
    string ans="";
    for (auto x:s){
        if (seen.find(x)==seen.end()){
            ans+=x;
            seen.insert(x);
        }
    }
    cout << ans;
}