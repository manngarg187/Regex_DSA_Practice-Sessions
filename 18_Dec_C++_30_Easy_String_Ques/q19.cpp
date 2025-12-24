// remove all special characters form a string

#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="Ab@25 7b 7@#k";
    string ans="";
    for (auto x:nums){
        if ((x>='a' && x<='z')||(x>='A' && x<='Z')||(x>='0'&&x<='9')){
            ans = ans+x;
        }
    }
    cout << ans;
}