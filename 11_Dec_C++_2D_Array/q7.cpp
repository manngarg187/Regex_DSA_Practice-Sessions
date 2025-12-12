// count number of positive and negatgive values in 2D array

#include <iostream>
#include <vector>

using namespace std;
int main(){
    int p=0;
    int n=0;
    vector <vector<int>>v={{2,-11,2},{-1,8,3},{7,-13,0}};
    for (int i=0; i<v.size(); i++){
        for (int j=0; j<v[0].size(); j++){
            if (v[i][j]>0){
                p++;
            }
            if (v[i][j]<0){
                n++;
            }
        }
    }
    cout << "positive : " << p << endl;
    cout << "negative : " << n;
}