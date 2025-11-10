
// Remove duplicates from an array
// Approch 1:

#include <iostream>
#include <set>
#include <vector>

using namespace std;
int main(){
    vector <int>v={1,1,1,2,2,3};
    set <int> s;
    for (auto x:v){
        s.insert(x);
    }
    for (auto x:s){
        cout << x << " ";
    }
}