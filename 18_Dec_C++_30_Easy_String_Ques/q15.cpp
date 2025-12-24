// find the first character of the string

#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="34@&8B 83t";
    for (auto &x:nums){
        if ((x>='a' && x<='z') || (x>='A' && x<='Z')){
            cout << x;
            return 0;
        }
    }
    cout << "There is no character in string";
    return 0;
}