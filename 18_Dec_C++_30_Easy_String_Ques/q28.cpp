// 28. Check whether string ends with a consonant

#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="Tbd@ K25O";
    int n = nums.size();
    char x=nums[n-1];
    if (!(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A'|| x=='E'|| x=='I'||x=='O'||x=='U')){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}