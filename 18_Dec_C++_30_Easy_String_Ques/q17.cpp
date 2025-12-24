// convert entire string to uppercase

#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="ABccddlKKMnOp";
    for (auto &x:nums){
        if (x>='a' && x<='z'){
            x = toupper(x);
        }
    }
    cout << nums;
    return 0;
}