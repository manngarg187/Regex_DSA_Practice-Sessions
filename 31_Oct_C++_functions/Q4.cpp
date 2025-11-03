
// Write a funtion to find the maximum of two numbers

#include <iostream>
using namespace std;

int maximum(int a, int b){
    if (a>b){
     //   cout<<a;   - - - Wrong
     return a;
    }
    else{
     //   cout<<b;   - - - Wrong
     return b;
    }
}

int main(){
    cout << maximum(5,-9);
}