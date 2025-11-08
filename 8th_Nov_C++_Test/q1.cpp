
/*
Given an array, find the pair of elements that have the maximum absolute differenc, & print that difference
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    vector <int> v = {2,10,5,1,8};
    int max = INT_MIN;
    int min = INT_MAX;
    for (auto x:v){
        if (x>max){
            max = x;
        }
        if (x<min){
            min = x;
        }
    }
    cout << max-min;

}