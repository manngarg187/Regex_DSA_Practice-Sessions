
// Find the sum of all elements in an array

#include <iostream>
using namespace std;
int main(){
    int sum = 0;
    int arr[3] = {1,2,6};
    for (int i=0; i<3; i++){
        sum = sum + arr[i];
    }
    cout << sum;
}