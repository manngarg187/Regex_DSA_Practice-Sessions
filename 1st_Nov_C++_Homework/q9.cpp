
// 9. Write a program to check whether a number is multiple of both 4 and 6 but not 8.

#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter the number: "<< endl;
    cin>> a;
    if (a%4 == 0 && a%6 == 0 && a%8 != 0){
        cout << "success";
    }
    else{
        cout << "Fail";
    }
}