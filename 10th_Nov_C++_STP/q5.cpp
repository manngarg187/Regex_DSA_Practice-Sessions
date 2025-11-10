
// sort an array in decending array.

#include <iostream>
#include <vector> 


using namespace std;
int main(){
    vector <int> v={3,-2,7,1,-30};
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    for (auto x:v){
        cout << x << " ";
    }
}