
// Find the largest element in an Array
// Approch 2

#include <iostream>
using namespace std;
int main(){
    int arr[5] = {3,8,7,6,4};
    int largest = 0;
    for (int i=0; i<5; i++){
        if (arr[i]> largest){
            largest = arr[i];
        }
    }
    cout << largest;
}