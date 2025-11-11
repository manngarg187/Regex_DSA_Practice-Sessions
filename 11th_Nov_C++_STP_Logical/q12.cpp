
// 9. Find the intersection of two arrays.

#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    vector <int> v1={2,7,-88,0,7,-3,8};
    vector <int> v2={3,-3,0,1,2,8,9,-22};
    set <int> s;
    for (int i=0; i<v1.size(); i++){
        for (int j=0; j<v2.size(); j++){
            if (v1[i]==v2[j]){
                s.insert(v1[i]);
            }
        }
    }
    for (auto x:s){
        cout << x << " ";
    }
}