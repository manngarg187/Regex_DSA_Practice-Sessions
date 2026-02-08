#include <iostream>
using namespace std;

int main(){
    int choice;
    cout << "Enter the choice: ";
    cin >> choice;

    switch (choice){
        
        case 1:
        cout << "hello";
        break;

        case 2:
        cout << "hello boss";
        break;

        default:
        cout << "over";
    }
}