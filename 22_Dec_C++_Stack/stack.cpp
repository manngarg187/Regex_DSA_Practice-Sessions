#include<iostream>
using namespace std;

#define MAX 5
int stack[MAX];
int top=-1;

void push(int x){
    if(top==MAX-1){
        cout<<"stack is Overflow";
        return;
    }
    top++;
    stack[top]=x;
}

void pop(){
    if(top==-1){
        cout<<"stack is uderflow";
        return;
    }
    cout<<"popped value is "<<stack[top]<<endl;
    top--;
}

void peek(){
    if(top==-1){
        cout<<"stack is empty ";
        return;
    }
    cout<<"top value is "<<stack[top]<<endl;
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    peek();
    push(1);
} 