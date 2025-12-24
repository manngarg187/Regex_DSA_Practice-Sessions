// Check if 2 strings are equal
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1 = "htggK";
    int n=str1.size();
    string str2 = "htggk";
    if(str1==str2){
        cout << "true";
    }
    else{
        cout << "false";
    }
}