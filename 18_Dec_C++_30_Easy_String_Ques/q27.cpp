// 27. Check whether string starts with a vowel

#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="Tbd@ K25g";
    char x=nums[0];
    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A'|| x=='E'|| x=='I'||x=='O'||x=='U'){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}