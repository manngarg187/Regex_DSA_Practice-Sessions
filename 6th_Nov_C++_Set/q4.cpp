
// Find the second largest element in vector
// Example 1: 1,3,7,4,2  - - -> OUtput: 4
// Example 2: 1,1,1,1,1 - - - > OUtput: -1 

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v = {3,4,9,7,2,1};
    int largest = -1;
    int slargest = -1;
    for (auto x:v){
        if (x>largest){
            slargest = largest;
            largest = x;
        }
        else if(x<largest && x>slargest){
            slargest=x;
        }
    }
    cout<<slargest;
}