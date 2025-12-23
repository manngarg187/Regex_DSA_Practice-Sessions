// Insert 3 values in stack using loop and then print all the values of stack

#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack <int> s;
    for (int i=0; i<3; i++){
        int value;
        cout << "Enter " <<i<<" value : ";
        cin>>value;
        s.push(value);
    }
    while (!s.empty()){
        cout << s.top() <<endl;
        s.pop();
    }
}