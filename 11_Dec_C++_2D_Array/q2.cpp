// Count total even & odd numbers in a matrix

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int odd = 0;
    int even = 0;
    vector <vector <int>> v= {{1,2,2},{3,6,2},{2,2,2}};
    for (int i=0; i<v.size(); i++){
        for (int j=0; j<v[i].size(); j++){
            if (v[i][j]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
    }
    cout << "Even : " << even << endl;
    cout << "Odd : " << odd;
}