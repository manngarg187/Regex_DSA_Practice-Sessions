
/*
v={3,9,8,7,6,4}

Print the following Output:

Sum of even index : 17
Sum of odd index : 20

*/

#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector <int> v={3,9,8,7,6,4};
    int even = 0;
    int odd = 0;
    for (int i=0; i<v.size(); i++){
        if (i%2==0){
            even = even + v[i];
        }
        else{
            odd = odd + v[i];
        }
    }
    cout << "Sum of even index : " << even << endl;
    cout << "Sum of odd index : " << odd;
}