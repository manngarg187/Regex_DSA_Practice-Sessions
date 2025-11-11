
// Count the number of pairs with a given sum.

#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    vector <int> v={3,5,-2,7,2,6,88,10,4};
    int sum = 8;
    int count = 0;
    for (int i=0; i<v.size(); i++){
        for (int j=i+1; j<v.size(); j++){
            if (sum == v[i] + v[j]){
                count++;
            }
        }
    }
    cout << count;
}