
// Write a function to calculate the simple interest

#include <iostream>
using namespace std;

int Simple_interest(int p, int r, int t){
    return p*r*t/100;
}

int main(){
    cout << Simple_interest(1000,10,12);
}
