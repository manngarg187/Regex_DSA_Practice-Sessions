// take input of 10 values in a stack and print their sum.

#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack <int> s;
    for (int i=0; i<10; i++){
        int value;
        cout << "Enter " <<i<<" value : ";
        cin>>value;
        s.push(value);
    }
    int sum=0;
    while (!s.empty()){
        sum = sum+s.top();
        s.pop();
    }
    cout<< sum;
}
