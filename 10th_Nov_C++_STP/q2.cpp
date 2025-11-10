
// Remove duplicates from an array
// Approch 2:

#include <iostream>
#include <map>
#include <vector>

using namespace std;
int main(){
    vector <int>v={1,1,1,2,2,3};
    map <int, int> m;
    for (auto x:v){
        m[x]++;
    }
    for (auto x:m){
        cout << x.first << " ";
    }
}