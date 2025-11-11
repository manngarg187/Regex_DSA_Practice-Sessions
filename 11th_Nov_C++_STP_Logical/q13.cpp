
// 10 Find the union of two arrays.

#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    vector <int> v1={2,7,-88,0,7,-3,8};
    vector <int> v2={3,-3,0,1,2,8,9,-22};
    set <int> s;
    for (auto x:v1){
        s.insert(x);
    }
    for (auto x:v2){
        s.insert(x);
    }
    for (auto x:s){
        cout << x << " ";
    }
}