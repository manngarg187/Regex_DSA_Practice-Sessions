// 22. Reverse a string word by word

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string nums="Reverse a string word by word";
    string rev="";
    int n=nums.size();
    vector <string>v;
    string single="";
    for (auto x:nums){
        if (x!=' '){
            // single=+x;
            single+=x;
        }
        else{
            v.push_back(single);
            single="";
        }
    }
    v.push_back(single);
    // for (int i=0; i<n; i++){ --> I used the size of nums here instead of vector v.
    for (int i=0; i<v.size(); i++){
        // if (i>=0 && i<v.size()-1){ ---> there was no need of i>=0 here
        if (i<v.size()-1){
            rev = ' ' + v[i] + rev;
        }
        else{
            rev = v[i]+rev;
        }
    }
    cout << rev;
}