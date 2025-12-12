// Print the index of '2' in each column.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <vector <int>> v= {{1,2,2},{3,6,2},{2,2,2}};
    for (int i=0; i<v.size(); i++){
        for (int j=0; j<v[i].size(); j++){
            if (v[j][i]==2){
                cout << j << "," << i << endl;
                break;
            }
        }
    }
}