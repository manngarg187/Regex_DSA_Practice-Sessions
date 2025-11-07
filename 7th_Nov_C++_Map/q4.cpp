
//  use sort(v.begin(),v.end())

#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector <int> v={3,8,5,10,-8,9,0,-1,7};
    sort(v.begin(),v.end());

    for (auto x:v){
        cout << x << " ";
    }
}

