
// print the values of vector using recursion

#include <iostream>
#include <vector>
using namespace std;

void print(vector <int> v, int i){
    if (i>=v.size()){
        return;
    }
    cout << v[i] << " ";
    print(v,i+1);
}

int main(){
    vector <int> v={1,2,3};
    print(v,0);
}