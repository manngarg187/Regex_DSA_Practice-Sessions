#include <iostream>
using namespace std;

// #define MAX 7; - Syntax ERROR!
#define MAX 7
int stack[MAX];
int top=-1;

// void push(x){ - Syntax ERROR!
void push(int x){
    if (top==MAX-1){
        cout << "Stack overflow"<<endl;
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
    top--;
}

void peek(){
    if (top==-1){
        cout << "Stack is Empty"<<endl;
        return;
    }
    cout << "top value is "<< stack[top]<<endl;
}

int main(){
    push(54);
    push(-98);
    push(-71);
    peek();
    pop();
    peek();
}
