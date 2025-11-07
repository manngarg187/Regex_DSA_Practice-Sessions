
// Find the smallest element in an array.

#include <iostream>
using namespace std;
int main(){
    int arr[6] = {3,4,6,8,13,2};
    int smallest = arr[0];
    for (int i=0; i<6; i++){
        if (smallest > arr[i]){
            smallest = arr[i];
        }
    }
    cout << smallest;
}