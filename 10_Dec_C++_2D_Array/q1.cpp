// Search an element in a matrix

#include <iostream>
#include <vector>
using namespace std;
int main(){
    bool check = false;
    int target = 2;
    vector <vector<int>>v={{5,4,3},{1,7,8},{0,2,7}};
    for (int i=0; i<v.size(); i++){
        for (int j=0; j<v[i].size(); j++){
            if (target == v[i][j]){
                check = true;
                break;
            }
        }
    }
    if (check == true){
        cout<< "Target Found";
    }
    else{
        cout << "Target not found";
    }
}