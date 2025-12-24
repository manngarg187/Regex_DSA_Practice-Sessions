// count only consonents in a string
#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="sbudcaait";
    int count=0;
    for (auto x:nums){
        if (!(x=='a' || x=='e' || x=='i' || x== 'o' || x=='u')){
            count++;
        }
    }
    cout<< count;
}