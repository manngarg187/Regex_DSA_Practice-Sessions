
// Reverse an Array

#include <iostream>
using namespace std;
int main(){
    int arr[5] = {43,2,-8,-2,7};
    int size = 5;
    int i = 0;
    int j = size - 1;
    while (i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for (int k=0; k<size; i++){
        cout << arr[k];
    }

}