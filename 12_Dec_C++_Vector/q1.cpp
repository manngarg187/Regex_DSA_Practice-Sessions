// Question: Leader Elements in an array: An element in an array is a leader if all elements to its right are smaller. Return all leader elements in the array.

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v={16,17,4,3,5,2};
    for (int i=0; i<v.size(); i++){
        int test = 1;
        for (int j=i+1; j<v.size();j++){
            if (v[i]<v[j]){
                test=0;
            }
        }
        if (test==1){
            cout << v[i] << " ";
        }
    }
}