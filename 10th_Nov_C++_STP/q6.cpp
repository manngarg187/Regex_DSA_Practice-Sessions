
// Rotate array element by 1 position to left
// Input = v={4,8,-99,2,0,7};
// Output = v => 8 -99 2 0 7 4 ;
#include <iostream>
#include <vector> 


using namespace std;
int main(){
    vector <int> v={4,8,-99,2,0,7};
    int size = v.size();
    int temp = v[0];
    for (int i=1; i<size; i++){
        v[i-1] = v[i];
    }
    v[size-1]=temp;
    for (auto x:v){
        cout << x << " ";
    }
}