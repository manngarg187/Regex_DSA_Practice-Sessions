
/*
int arr[5] = {1,2,3,4,5};
output: 5 4 3 2 1
*/

#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 4;
    while (size>=0){
        cout<<arr[size]<< ' ';
        size = size - 1;
    }
}