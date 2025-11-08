
/*
Find the element that appears once
*/

#include <iostream>
#include <vector>
#include <climits>
#include <map>
using namespace std;
int main(){
    vector <int> v={2,3,5,4,5,3,4};
    map <int,int> m;
    for (auto x:v){
        m[x]++;
    }
    for (auto x:m){
        if (x.second == 1){
            cout << x.first;
        }
    }
}