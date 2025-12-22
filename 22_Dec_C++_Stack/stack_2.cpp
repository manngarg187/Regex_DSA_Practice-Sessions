#include <iostream>
using namespace std;

#define MAX 5
int stack[MAX];
int top = -1;

void push (int x){
    if (top==MAX-1){
        cout << "Stack overflow."<<endl;
        return;
    }
    top++;
    stack[top]=x;
}

void pop(){
    if (top==-1){
        cout << "Stack underflow"<<endl;
        return;
    }
    cout << "Popped value is " << stack[top]<<endl;
    top--;
}

void peek(){
    if (top==-1){
        cout << "Stack is empty"<<endl;
        return;
    }
    cout << "top element is " << stack[top]<< endl;
}

int main(){
    push(97);
    pop();
    pop();
    peek();
}

