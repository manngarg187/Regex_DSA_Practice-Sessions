
// Take 5 integers in an array from the user and print them.

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
int main()
{
    int a;
    vector<int> v;
    for (int i = 1; i <= 5; i++)
    {
        cout<<"Enter Value "<<i << " : ";
        cin >> a;
        v.push_back(a);
    }

    for (auto x:v){
        cout<<x<<" ";
    }
}
