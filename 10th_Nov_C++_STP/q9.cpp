
// 11 Find the maximum product of two elements in an array.

#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int main(){
    vector <int> v={8,2,0,-9,-12,3};
    vector <int> positive;
    vector <int> negative;
    for (auto x:v){
        if (x>0){
            positive.push_back(x);
        }
        else {
            negative.push_back(x);
        }
    }
    int largest=INT_MIN;
    int slargest=INT_MIN;

    for (auto x:positive){
        if (x>largest){
            slargest = largest;
            largest = x;
        }
        else if(x<largest && x>slargest){
            slargest = x;
        }
    }

    int value_1 = largest*slargest;

    int smallest=INT_MAX;
    int ssmallest=INT_MAX;
    
    for (auto x:negative){
        if (x<smallest){
            ssmallest = smallest;
            smallest = x;
        }
        else if (x>smallest && x<ssmallest){
            ssmallest = x;
        }
    }
    
    int value_2 = smallest*ssmallest;

    cout << max(value_1,value_2);

}