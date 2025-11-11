
// 5 Move all zeros to the end while maintaining order.

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v={3,0,-2,0,0,7,99};
    vector <int> v1;
    for (auto x:v){
        if (x != 0){
            v1.push_back(x);
        }
    }
    for (auto x:v){
        if (x == 0){
            v1.push_back(x);
        }
    }

    for (auto x:v1){
        cout << x << " ";
    }
}