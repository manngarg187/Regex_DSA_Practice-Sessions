
// Check palindrome for a vector using recursion.

#include <iostream>
#include <vector>
using namespace std;

bool palind_vector(vector <int>v, int i, int j){
    if (i>j) return true;
    if (v[i] != v[j]) return false;
    return palind_vector(v,i+1,j-1);
}

int main(){
    vector <int> v={1,2,2,1};
    cout << palind_vector(v,0,v.size()-1);
}

