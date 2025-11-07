
// Search for an element in an array (linear search).

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int>v={3,8,-99,9,-6};
    int target = 9;
    for (auto x:v){
        if (x==target){
            cout<<"Found it!";
            return 0;
        }
    }
    cout<<"Didn't found it!";
}