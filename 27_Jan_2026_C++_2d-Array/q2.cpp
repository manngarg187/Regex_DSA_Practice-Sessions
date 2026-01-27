// find if the following string is present in any of the row of the following matrix or not

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<char>>v={{'R','A','H','L'},{'K','E','J','R'},{'M','O','D','I'}};
    string target="MODI";

    for (int i=0; i<v.size(); i++){
        int count=0;
        for (int j=0; j<v[0].size(); j++){
            if (v[i][j] != target[j]){
                break;
            }
            else{
                count++;
            }
        }
        if (count==target.size()){
            cout << "Found";
            return 1;
        };
    }
    cout << "Not found";
}