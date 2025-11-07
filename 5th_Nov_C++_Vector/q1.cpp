
// 1 Find the Largest Element in an array.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int>v={2,32,43,90};
    int largest = 0;
    for (auto x:v){
        if (x>largest){
            largest = x;
        }
    }
    cout << largest;
}