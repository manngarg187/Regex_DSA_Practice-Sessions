// count number of lower case letters

#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="Ab@25 7b 7BD@#k";
    int count=0;
    for (auto x:nums){
        if (x>='a' && x<='z'){
            count++;
        }
    }
    cout << count;
}