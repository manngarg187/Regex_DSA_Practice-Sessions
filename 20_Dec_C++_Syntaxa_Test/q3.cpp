// 3. First Non-Repeating Character

// Description:
// Given a string s, find the first character that does not repeat anywhere else in the string. If no such
// character exists, return -1.

// Examples:
// 1. "swiss" → "w"
// 2. "apple" → "a"
// 3. "aabbcc" → -1
// 4. "programming" → "p"
// 5. "teeter" → "r"

#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    string nums="aabbcc";
    map <char,int>m;
    for (auto x:nums){
        m[x]++;
    }
    for (auto x:nums){
        if (m[x]==1){
            cout<<x;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}

