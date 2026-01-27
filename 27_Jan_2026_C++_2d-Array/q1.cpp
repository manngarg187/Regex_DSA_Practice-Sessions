
// count the number of prime number in a matrix

#include <iostream>
#include <vector>
using namespace std;

bool prime_check(int x){
    if (x<=1) return false;
    if (x==2) return true;
    for (int i=2; i<x; i++){
        if (x%i==0) return false;
    }
    return true;
}

int main(){
    vector<vector<int>>v={{1,42,3},{23,7,-2},{55,73,85}};
    int count=0;
    for (int i=0; i<v.size(); i++){
        for (int j=0; j<v[0].size(); j++){
            if (prime_check(v[i][j])) count++;
        }
    }
    cout << count;
} 

