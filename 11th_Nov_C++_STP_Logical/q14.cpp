
// 5. Move all zeros to the end while maintaining order.
// Approch 2

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v={3,0,-2,0,0,7,99};
    vector <int> store;
    for (auto x:v){
        if (x != 0){
            store.push_back(x);
        }
    }
    int i=0;
    while (i<store.size()){
        v[i]=store[i];
        i++;
    }
    while (i<v.size()){
        v[i] = 0;
        i++;
    }


    for (auto x:v){
        cout << x << " ";
    }
}