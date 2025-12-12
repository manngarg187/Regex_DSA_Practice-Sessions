// Find the row with maximum sum.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int max_sum = INT_MIN;
    int max_row = 0;
    vector <vector <int>> v= {{1,2,2},{3,6,2},{2,2,2}};
    for (int i=0; i<v.size(); i++){
        int sum=0;
        for (int j=0; j<v[i].size(); j++){
            sum = sum + v[i][j];
        }
        if (sum>max_sum){
            max_sum=sum;
            max_row = i;
        }
    }
    cout << max_row+1;
}