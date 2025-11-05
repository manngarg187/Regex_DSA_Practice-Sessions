
// 8 Count how many Positive and Negative numbers are in the array.

#include <iostream>
using namespace std;
int main(){
    int arr[5] = {-2,3,8,77,0};
    int positive_num = 0;
    int negative_num = 0;
    for (int i=0; i<5; i++){
        if (arr[i]>0){
            positive_num++;
        }
        if (arr[i]<0){
            negative_num++;
        }
    }
    cout << "Positive numbers: " << positive_num << endl;
    cout << "Negative numbers: " << negative_num;
}