
#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector <int> v={2,6,3,9,11,16};
    // int count;   - - - > This is a blunder bro... you need to equate count = 0
    int count=0;
    for (int i=0; i<v.size(); i++){
        if (v[i]%3==0 && v[i]%9==0){
            count = count + 1;
        }
    }
    cout << count;
}