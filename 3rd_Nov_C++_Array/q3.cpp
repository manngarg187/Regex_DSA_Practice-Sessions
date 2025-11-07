
/*
int arr[5] = {1,2,3,4,5};
output: 1 2 3 4 5
*/

#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 0;
    while (size<=4){
        cout<<arr[size]<< ' ';
        size = size + 1;
    }
}