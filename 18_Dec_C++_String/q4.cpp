// Convert lowercase to uppercase & uppercase to lowercase
#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="abcDUkLfg";
    int n=nums.size();
    // for (auto x:nums){
    for (auto &x:nums){
        if (x>='a' && x<='z'){
            x = toupper(x);
        }
        else{
            x = tolower(x);
        }
    }
    cout << nums;
}