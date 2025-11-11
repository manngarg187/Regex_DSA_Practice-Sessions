
// Check if a array is palindrom
// Approach 1

#include <iostream> 
#include <vector>
using namespace std;
int main(){
    vector <int> v={2,3,7,8,7,3,2};
    int i=0;
    int j=v.size() -1;
    while (i<j){
        if (v[i] != v[j]){
            cout << "Not a Palindrom";
            return 0;
        }
        i++;
        j--;
    }
    cout << "Yes, it is a Palindrom";
}