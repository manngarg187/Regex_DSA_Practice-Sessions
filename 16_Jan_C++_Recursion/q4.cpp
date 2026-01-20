
// reverse array using recursion

#include <iostream>
#include <vector>
using namespace std;

void reverse(vector <int> &v, int i, int j){
    if (i>j) return;
    swap(v[i],v[j]);
    reverse(v,i+1,j-1);
}

int main(){
    vector <int> v={1,2,3};
    reverse(v,0,v.size()-1);

    for (auto x:v){
        cout << x << " ";
    }
}