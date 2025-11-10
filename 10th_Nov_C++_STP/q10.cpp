
// 12 Count even and odd numbers in an array.

#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector <int> v={3,8,-9,0,77,-22, 922};
    int even = 0;
    int odd = 0;
    for (auto x:v){
        if (x%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << "Even : " << even << endl;
    cout << "Odd : " << odd;
}