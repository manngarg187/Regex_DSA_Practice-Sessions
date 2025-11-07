
// 5. Write a program to compare two strings without using strcmp().

#include <iostream>
using namespace std;
int main(){
    string str_1;
    cout << "Enter 1st string: " << endl;
    // cin >> str_1;  - Wrong
    getline(cin, str_1);
    string str_2;
    cout << "Enter 2nd string: " << endl;
    // cin >> str_2;   - Wrong
    getline(cin, str_2);
    if (str_1 == str_2){
        cout << "same";
    }
    else {
        cout << "Different";
    }
}