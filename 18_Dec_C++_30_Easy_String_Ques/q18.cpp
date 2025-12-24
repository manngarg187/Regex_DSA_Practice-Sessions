// convert entire string to lowercase

#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="ABccddlKKMnOp";
    for (auto &x:nums){
        if (x>='A' && x<='Z'){
            x = tolower(x);
        }
    }
    cout << nums;
    return 0;
}