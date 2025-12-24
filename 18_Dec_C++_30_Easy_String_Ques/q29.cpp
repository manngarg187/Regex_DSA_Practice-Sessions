// 29. Find middle character of a string
#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="Tbd@gdKlpt";
    string ans="";
    int n = nums.size();
    if (n%2==0){
        ans=ans + nums[n/2] + nums[(n/2)-1];
        cout<<ans;
    }
    else{
        cout<<nums[(n-1)/2];
    }
}