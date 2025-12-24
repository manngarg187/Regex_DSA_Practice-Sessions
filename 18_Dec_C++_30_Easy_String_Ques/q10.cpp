// count words in a string
#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="you want to modify a container element";
    int count=1;
    for (auto x:nums){
        if (x==' '){
            count++;
        }
    }
    cout << count;
}