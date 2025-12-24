// Check if a string contains only alphabets
#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="445834";
    for (int i=0; i<nums.size();i++){
        if (!(nums[i]>='0' && nums[i]<='9')){
            cout<< "False";
            return 0;
        }
    }
    cout << "True";
    return 0;
}