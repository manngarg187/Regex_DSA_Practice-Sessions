
// 4. Remove duplicates from an array. (without using set container)

#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    vector <int>v={1,1,2,2,3,4};
    map<int,int>m;
    
    // for insersting value in map
    for (auto x:v){
        m[x]++;
    }

    //x.first for first value
    for (auto x:m){
        cout << x.first << " ";
    }
}


