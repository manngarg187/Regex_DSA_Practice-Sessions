
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v={3,9,-2,7,8,9,2};
    int i = 0;
    int j = v.size() - 1;
    while (i<j){
        swap (v[i],v[j]);
        i++;
        j--;
    }
    for (auto x:v){
        cout << x << " ";
    }
}