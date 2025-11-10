
// Rotate array elements by 1 position to the right

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v={4,8,-99,2,0,7};
    int size = v.size();
    int temp = v[size-1];

    // for (int i=0; i<size-1, i++)  - - -> Wrong Approch
    for (int i=size-2; i>=0; i--){
        v[i+1] = v[i];
    }
    v[0] = temp;

    for (auto x:v){
        cout << x << " ";
    }
}