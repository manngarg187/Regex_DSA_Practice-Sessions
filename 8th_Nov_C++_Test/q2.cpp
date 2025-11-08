
/*
Rearragnge array so that even numbers come before odd numbers.
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    vector <int> v={3,2,4,1,5,6};
    vector <int> v_new;
    for (auto x:v){
        if (x%2==0){
            v_new.push_back(x);
        }
    }
    for (auto x:v){
        if (x%2!=0){
            v_new.push_back(x);
        }
    }
    for (auto x:v_new){
        cout << x << " ";
    }
}
