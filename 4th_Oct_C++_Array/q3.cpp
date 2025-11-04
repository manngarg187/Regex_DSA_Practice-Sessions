
// Find the largest element in an Array
// Edge Case:- if our array contains negative value so our 2nd approch code will not work. So, it's solution :
// int largest = arr[0]

#include <iostream>
using namespace std;
int main(){
    int arr[5] = {-8,-92,-66,-2,-87};
    int largest = arr[0];
    for (int i=0; i<5; i++){
        if (arr[i]> largest){
            largest = arr[i];
        }
    }
    cout << largest;
}