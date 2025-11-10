
// Sort an array in ascending order

#include <iostream>
#include <vector> 


using namespace std;
int main(){
    vector <int> v={3,-2,7,1,-30};
    sort(v.begin(),v.end());

    for (auto x:v){
        cout << x << " ";
    }
}