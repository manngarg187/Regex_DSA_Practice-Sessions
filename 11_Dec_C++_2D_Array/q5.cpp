// Find maxium elements in each column

#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector <vector<int>>v={{2,11,2},{-1,8,3},{7,13,0}};
    for (int i=0; i<v.size(); i++){
        int max = INT_MIN;
        for (int j=0; j<v[0].size(); j++){
            if (v[j][i]>max){
                max = v[j][i];
            }
        }
        cout << max << " ";
    }
}