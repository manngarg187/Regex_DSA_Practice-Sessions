
// print value of a string using recursion

#include <iostream>
using namespace std;

void print(string s, int i){
    if (i>=s.size()){
        return;
    }
    cout << s[i]<<endl;
    // print(string s, int i+1);
    print(s,i+1);
}

int main(){
    string s="mann";
    print(s,0);
}