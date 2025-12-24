// Replace all the spaces with @
#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="abc  DU kLf g";
    int n=nums.size();
    string ans="";
    for (auto x:nums){
        if (x!=' '){
            ans = ans+x;
        }
        else {
            ans = ans+'@';
        }
    }
    cout << ans;
}