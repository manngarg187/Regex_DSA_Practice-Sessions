
// Write a function to print the table of a given number

#include <iostream>
using namespace std;

void Mulp_table(int a){
    for (int i=1; i<=10; i++){
        cout << a << " * " << i << " = " << a*i << endl;
    }
}

int main(){
    Mulp_table(5);
}