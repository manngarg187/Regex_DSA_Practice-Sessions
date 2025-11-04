
// Find the average of all elements in an array.
// Average = (sum of all elements)/(no. of elements)

#include <iostream>
using namespace std;
int main(){
    int sum = 0;
    int arr[3] = {1,2,6};
    for (int i=0; i<3; i++){
        sum = sum + arr[i];
    }
    int avg = sum/3;
    cout << avg;
}