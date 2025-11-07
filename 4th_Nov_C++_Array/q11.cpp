
// 9 Check if the Array is Sorted in ascending order or not.
// ascending -> smaller to bigger

#include <iostream>
using namespace std;
int main(){
    int arr[5] = {-7,0,4,-88,10};    // Output : not sorted
    // int arr[5] = {-87,0,2,8,12};   // Output : sorted
    //for (int i=0; i<5; i++){   - - - Mistake
    for (int i=0; i<4; i++){
        if (arr[i+1]<arr[i]){
            cout << "Sorry, The array is not sorted in ascending order";
            return 0;
        }
    }
    cout << "Yes, the array is sorted in ascending order";

}