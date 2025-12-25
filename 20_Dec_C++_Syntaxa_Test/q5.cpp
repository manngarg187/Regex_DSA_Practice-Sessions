// 5. Check if Two Strings Are Anagrams

// Description:
// Two strings are anagrams if they contain the same characters in the same frequency, but possibly
// in different order. Print YES or NO.

// Examples:
// 1. "listen", "silent" → YES
// 2. "rail", "liar" → YES
// 3. "hello", "bello" → NO
// 4. "triangle", "integral" → YES
// 5. "abc", "abcc" → NO

#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    string str1 = "listen";
    string str2 = "silent";
    map <char,int> m1;
    map <char,int> m2;
    for (auto x:str1){
        m1[x]++;
    }
    for (auto x:str2){
        m2[x]++;
    }
    if (m1==m2){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}