// Question: Leader Elements in an array: An element in an array is a leader if all elements to its right are smaller. Return all leader elements in the array.

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v={16,17,4,3,5,2};
    vector <int> ans;
    int maxi = INT_MIN;
    for (int i=v.size()-1; i>=0; i--){
        if (v[i]>maxi){
            ans.push_back(v[i]);
            maxi = v[i];
        }
    }
    reverse(ans.begin(),ans.end());
    for (auto x:ans){
        cout << x << " ";
    }
}