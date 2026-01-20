#include <iostream>
#include <vector>
using namespace std;

void num_sq(int num, int &ans, int i){
    if (i==num+1) return;
    if (i<=num) ans=ans+num;
    num_sq(num, ans,i+1);
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    num=abs(num);
    int ans=0;
    num_sq(num, ans,1);
    cout << ans;
}