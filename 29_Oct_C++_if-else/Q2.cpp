#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the Age: "<<endl;
    cin>>a;
    if (a>=18){
        cout<<"Eligible to vote!";
    }
    else{
        cout<<"Not Eligible";
    }
}