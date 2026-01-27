
// Check Palindrome in a string using recursion

#include <iostream>
using namespace std;

bool palind_string(string s, int i, int j){
    
    if (i>j) return true;
    if (s[i] != s[j]) return false;

    return palind_string(s,i+1,j-1);
}

int main(){
    string s="mannam";
    cout << palind_string(s,0,s.size()-1);
}