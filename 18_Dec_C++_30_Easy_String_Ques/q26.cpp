// 26. Count number of spaces in a string

#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="abd@ K25  g";
    int count=0;
    for (auto x:nums){
        if (x==' '){
            count++;
        }
    }
    cout<< count;
}