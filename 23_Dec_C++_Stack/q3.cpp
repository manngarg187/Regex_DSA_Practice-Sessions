// Add the all value of vector inside a stack and then print the all the values of stack
#include <iostream>
#include <stack>
#include <vector> 
using namespace std;
int main(){
    vector <int> v={1,2,3};
    stack <int> s;
    for (auto x:v){
        s.push(x);
    }
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}