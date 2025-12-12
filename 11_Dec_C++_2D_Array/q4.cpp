// count elements greater then the given number

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int target = 3;
    int count = 0;
    vector <vector <int>> v= {{1,7,2},{3,6,2},{-1,2,9}};
    for (int i=0; i<v.size(); i++){
        for (int j=0; j<v[i].size(); j++){
            if (v[i][j]>target){
                count++;
            }
        }
    }
    cout << count;
}