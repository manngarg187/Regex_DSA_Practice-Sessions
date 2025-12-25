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
    map<int,int>m;
    vector <int> ans;
    for (auto x:nums){
        m[x]++;
    }
    for (auto x:m){
        for (int i=0; i<x.second; i++){
            ans.push_back(x.first);
        }
    }
    for (auto x:ans){
        cout << x << " ";
    }
}