
// Count how many even and odd numbers are present in an array

#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,3,7,2,4};
    int even = 0;
    int odd = 0;
    for (int i=0; i<5; i++){
        if ((arr[i])%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << "Even : " << even << endl;
    cout << "Odd : " << odd;
}