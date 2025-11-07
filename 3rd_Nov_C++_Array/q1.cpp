
/*
int arr[6] = {77,11,66,71,33,41};
print output:
41 33
71 66
11 77
*/

#include <iostream>
using namespace std;
int main(){
    int arr[6] = {77,11,66,71,33,41};
    for (int i=5; i>=0; i--){
        if (i%2 == 0){
            cout << arr[i] << endl;
        }
        else {
            cout << arr[i] << ' ';
        }
    }
}