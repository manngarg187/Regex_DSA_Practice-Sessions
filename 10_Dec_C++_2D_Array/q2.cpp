// Print the sum of each row in a 2D Array

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <vector <int>> v= {{2,3,-1},{0,5,3},{7,1,-2}};
    for (int i=0; i<v.size(); i++){
        int sum=0;
        for (int j=0; j<v[i].size(); j++){
            sum = sum + v[i][j];
        }
        cout << sum << " ";
    }
}