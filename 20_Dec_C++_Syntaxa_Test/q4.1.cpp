// 4. Leader Elements in an Array

// Description:
// An element in an array is a leader if all elements to its right are smaller. Return all leader elements in the array.

// Examples:
// 1. [16,17,4,3,5,2] → 17, 5, 2
// 2. [1,2,3,4,5] → 5
// 3. [7,10,4,10,6,5,2] → 10, 6, 5, 2
// 4. [5,4,3,2,1] → all elements
// 5. [30,20,10] → 30, 20, 10

// Approach 1 - Brute Force!
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> nums={7,10,4,10,6,20,2};
    int n=nums.size();
    vector <int> ans;
    for (int i=0; i<n; i++){
        int check=1;
        for (int j=i+1; j<n; j++){
            if (nums[i]<=nums[j]){
                check=0;
                break;
            }
        }
        if (check==1) ans.push_back(nums[i]);
    }
    for (auto x:ans){
        cout << x << " ";
    }
}