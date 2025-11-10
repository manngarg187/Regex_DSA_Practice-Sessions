
// copy all elements of one array into another.

#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector <int> v1={1,2,3,4,5};
    vector <int> v2;
    for (auto x:v1){
        v2.push_back(x);
    }

    for (auto x:v2){
        cout << x << " ";
    }
}