// Find frequency of each character
#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    string nums="abcDUkLfg";
    int n=nums.size();
    map <char,int>m;
    for (auto x:nums){
        m[x]++;
    }
    for (auto x:m){
        // cout << x.first() << "->" << x.second() << endl; -> INVALID SYNTAX!
        cout << x.first << "->" << x.second << endl;
    }
}