#include <iostream>
#include <vector>
using namespace std;

void count_zero(vector <int> v, int &count, int i){
    if (i==v.size()) return;
    if (v[i]==0) count++;

    count_zero(v,count,i+1);
}

int main(){
    vector <int> v={1,0,2,0,0,0,9,8};
    int count=0;
    count_zero(v,count,0);
    cout<<count;
}