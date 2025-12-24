// find the first character of the string

#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="34@&8B 83tK";
    string ans="";
    for (auto &x:nums){
        if ((x>='a' && x<='z') || (x>='A' && x<='Z')){
            ans=x;
        }
    }
    if (ans.length()==1){
        cout << ans;
    }
    else {
        cout << "No character found in the string";
    }
}