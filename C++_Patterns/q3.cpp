
/*
print the pattern:

3 2 1
3 2 1
3 2 1

*/

#include <iostream>
using namespace std;
int main(){
    for (int i=1; i<=3; i++){
        for (int j=3; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}