
// Merge 2 array into a 3rd array.

#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};
    vector<int> v3;
    for (auto x:v1){
        v3.push_back(x);
    }
    for (auto x:v2){
        v3.push_back(x);
    }

    for (auto x:v3){
        cout << x << " ";
    }
}
