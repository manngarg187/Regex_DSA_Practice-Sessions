
// 10. Write a program to print 'Pass' if marks are above 40, 'Grace' if between 35–40, else 'Fail'.

#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter the marks: "<< endl;
    cin >> a;
    if (a>40){
        cout << "Pass";
    }
    else if (a>35 && a<=40){
        cout << "Grace";
    }
    else {
        cout << "FAil";
    }
}