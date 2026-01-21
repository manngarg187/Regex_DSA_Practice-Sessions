
// Print all value greater than 6 in a array using recursion!

#include <iostream>
#include <vector>
using namespace std;

void all_above_six(vector<int>v, int i){
    if (i==v.size()) return;
    if (v[i] > 6 )  cout<<v[i]<<" ";
    all_above_six(v,i+1);
}

int main(){
    vector <int> v={2,7,6,-23,88,5,20};
    all_above_six(v,0);
}