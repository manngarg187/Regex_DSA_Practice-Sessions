
// Find weather a given array is a palindrom or not
// Approach 2

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v={2,3,7,8,7,3,2};
    vector <int> v_new;
    int i=0;
    int j=v.size() -1;
    for (i=v.size()-1; i>=0; i--){
        v_new.push_back(v[i]);
    }
    for (int i=0; i<v.size()-1; i++){
        if (v[i] != v_new[i]){
            cout << "No, it's not a palindrom";
            return 0;
        }
    }
    cout << "Yes, it's a palindrom";

}
