
// find the missing number in an array 0 to n.
// approch 2nd

#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector <int> v={0,1,3,4};
    int sum=0;
    for (auto x:v){
        sum = sum + x;
    }
    int n = v.size();
    // int sum1= (n)(n+1)/2;  - -> Silly Error -> error: called object type 'int' is not a function or function pointer int sum1= (n)(n+1)/2;
    int sum1= (n)*(n+1)/2;
    cout << sum1 - sum;
}