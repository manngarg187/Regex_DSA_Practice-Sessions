
// 7. Print all unique elements of an array.

#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    vector <int> v={2,-3,0,0,2,77,2,3};
    set <int> s;
    for (auto x:v){
        s.insert(x);
    }
    for (auto x:s){
        cout << x << " ";
    }
}