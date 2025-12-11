// Find maximum element in each row

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <vector<int>>v= {{1,2,3},{6,8,4},{11,12,10}};
    for (int i=0; i<v.size(); i++){
        int max = INT_MIN;
        for (int j=0; j<v[i].size(); j++){
            if (v[i][j] > max) {
                max = v[i][j];
            }
        }
        cout << max << " ";
    }
}