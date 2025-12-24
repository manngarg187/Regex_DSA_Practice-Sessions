// 30. Replace all vowels with #

#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="TbIOd@ K2a5g";
    for (auto &x:nums){
        if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A'|| x=='E'|| x=='I'||x=='O'||x=='U'){
            x='#';
        }
    }
    cout<<nums;
}