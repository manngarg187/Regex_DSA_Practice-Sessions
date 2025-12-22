// Reverse a string
#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="abcdefg";
    int n=nums.size();
    int i=0;
    int j=n-1;
    while (i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
    cout << nums;
}
