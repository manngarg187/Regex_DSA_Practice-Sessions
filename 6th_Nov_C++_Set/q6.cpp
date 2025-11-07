
// Find the second smallest in an vector.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    vector <int> v = {3,4,6,9,1};
    int smallest = INT_MAX;
    //int s_smallest;     - - > Mistake
    int s_smallest = INT_MAX;
    for (auto x:v){
        if (x<smallest){
            s_smallest = smallest;
            smallest = x;
        }
        else if (x>smallest && x<s_smallest){
            s_smallest = x;
        }
    }
    cout << s_smallest;
}