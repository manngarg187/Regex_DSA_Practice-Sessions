
// Search weather the given element is present in the given array or not.

// Example: arr[5] = {3,4,8,7,2} ; Target = 2 ---> Output : Yes
// Example 2: arr[5] = {3,8,4,1,3} ; Target = 11 ---> Output : No

#include <iostream>
using namespace std;
int main(){
    int arr[5] = {3,4,8,7,2};
    int target = 2;
    for (int i=0; i<5; i++){
        if (arr[i]==target){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}