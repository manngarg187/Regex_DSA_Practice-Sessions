// 23. Check if two strings have same length

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1= "dfdf &8fdfF";
    string str2= "adfdfdffdK";
    if (str1.size()==str2.size()){
        cout << "Equal length";
    }
    else{
        cout << "Unequal";
    }
}