#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node (int var){
        data = var;
        next=NULL;
    }
};

void print(node * head){
    node * temp = head;
    while (temp!=NULL){
        cout << temp->data<<"->";
        temp=temp->next;
    }
    cout << "NULL";
}

void Insertfront (node * &head){
    node * temp = new node(0);
    temp->next = head;
    head = temp;
}

int main(){
    node * head = new node(1);
    head->next= new node(2);
    head->next->next = new node(3);
    print(head);
    cout <<endl;
    Insertfront(head);
    print(head);
}