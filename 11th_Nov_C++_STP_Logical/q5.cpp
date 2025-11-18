
// 4 Find the majority element (appears more than n/2 times).

#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    vector <int> v={2,2,3,3,3,3};
    int n = v.size();
    map <int,int> m;
    for (auto x:v){
        m[x]++;
    }
    for (auto x:m){
        if (x.second>n/2){
            cout << x.first;
        }
    }

}