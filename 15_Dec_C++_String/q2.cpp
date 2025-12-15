// print the frequency of words in the string

#include <iostream>
#include <string>
#include <map>

using namespace std;
int main(){
    string name = "aaabbbbccccccc";
    map <char,int> m;
    for (auto x:name){
        m[x]++;
    }
    for (auto x:m){
        cout << x.first << " : " << x.second << endl;
    }

}

