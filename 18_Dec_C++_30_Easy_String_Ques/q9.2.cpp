// Replace all the spaces with @
// Method 2: Space complexity = O(1);
#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="abc  DU kLf g";
    int n=nums.size();
    // string ans="";
    // for (auto @x:nums){ --> Invaild Syntax
    for (auto &x:nums){
        // if (x=' '){ --> Syntax Error
        if (x==' '){ 
            x='@';
        }
    }
    cout << nums;
}