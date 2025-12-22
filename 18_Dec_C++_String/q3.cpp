// Count vowels and consonents in a string
#include <iostream>
#include <string>
using namespace std;
int main(){
    string nums="abcdefg";
    int n=nums.size();
    int vcount = 0;
    int ccount= 0;
    for (auto x:nums){
        if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
            vcount++;
        }
        else{
            ccount++;
        }
    }
    cout << "Vowel : " << vcount << endl;
    cout << "Consonents : " << ccount;
}