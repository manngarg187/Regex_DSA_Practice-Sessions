
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
int main(){
    vector <int> v = {1,2,2,2,2,2,3,3,3,4,7,7,1,2,3};
    set <int> s;
    for (auto x:v){
        s.insert(x);
    }
    for (auto x:s){
        cout<<x<<" ";
    }
}