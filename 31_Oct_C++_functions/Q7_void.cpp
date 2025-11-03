#include <iostream>
using namespace std;

void check (int a){
    if (a%2 == 0){
        cout << "Even";
    }
    else{
        cout << "Odd";
    }
}

int main(){
    // cout << check(7); - - - Wrong
    check(7);
}