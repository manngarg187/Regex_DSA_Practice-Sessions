
// 10 Find the Maximum Element at Even Indices of the array.

#include <iostream>
using namespace std;
int main(){
    int arr[5] = {-87,0,2,8,12};
    int max = 0;
    for (int i=0; i<5; i++){
        if (i%2==0){
            if (arr[i]>max){
                max = arr[i];
            }
        }
    }
    cout << max;
}