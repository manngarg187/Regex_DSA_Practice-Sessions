// 24. Copy one string into another without using inbuilt function

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1 = "ab23 Kg";
    string str2 = "";
    for (auto x:str1){
        str2+=x;
    }
    cout << str2;
}