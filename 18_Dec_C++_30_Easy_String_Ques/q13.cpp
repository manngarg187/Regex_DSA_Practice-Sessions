// Check if a string contains only alphabets
#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="abcDUkLf3g";
    for (int i=0; i<nums.size();i++){
        if (!((nums[i]>='a' && nums[i]<='z') || (nums[i]>='A' && nums[i]<='Z'))){
            cout<< "False";
            return 0;
        }
    }
    cout << "True";
    return 0;
}