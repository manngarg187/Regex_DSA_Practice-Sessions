
// Find the second largest element in vector

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    vector <int> v = {-3,-4,-18,-9,-2};
    int largest = INT_MIN;
    //int slargest;     - - - > IMPORTANT
    int slargest = INT_MIN;
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