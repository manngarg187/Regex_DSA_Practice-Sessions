
// find the missing number in an array 0 to n.
// Approch 1

#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector <int> v={0,1,3,4};
    int sum=0;
    for (auto x:v){
        sum = sum + x;
    }
    int sum1=0;
    for (int i=0; i<=v.size(); i++){
        sum1=sum1+i;
    }
    cout << sum1 - sum;
}