
// find weather the entered character is vowel or consonent

#include <iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter the character: "<<endl;
    cin>>a;
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ){
        cout<<"vowel";
    }
    else{
        cout<<"consonent";
    }
}