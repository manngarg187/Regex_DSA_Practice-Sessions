// 2. Sort an Array of 0s, 1s, and 2s (Dutch National Flag)

// Description:
// You are given an array consisting only of 0s, 1s, and 2s. Your task is to sort the array in linear time
// (O(n)) and constant space without using built■in sorting.

// Examples:
// 1. [2,0,1] → [0,1,2]
// 2. [2,2,0,1,1] → [0,1,1,2,2]
// 3. [0,0,1,2] → [0,0,1,2]
// 4. [1,2,0,2,1,0] → [0,0,1,1,2,2]
// 5. [2] → [2]

#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    vector <int> nums={1,2,0,2,2,2,1,0};
    int low=0, mid=0, high=nums.size()-1;
    for (int i=0; i<nums.size()-1; i++){
        if (nums[mid]==0){
            swap(nums[mid],nums[low]);
            mid++;
            low++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
    for (auto x:nums){
        cout << x << " ";
    }
}