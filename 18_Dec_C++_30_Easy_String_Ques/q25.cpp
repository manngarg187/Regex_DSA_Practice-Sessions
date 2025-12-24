// 25. Find ASCII value of each character

#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="abd@ K25g";
    for (auto x:nums){
        int k = x;
        cout << "ASCII value of " << x << " is " << k << endl;
    }
}