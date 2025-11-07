
// Print the following output using map for the following vector
// v={3,6,4,3,9,4}
/*
Output:
0->3
1->6
2->4
3->3
4->9
5->4
*/

#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    vector <int> v={3,6,4,3,9,4};
    map <int,int> m;
    for (int i=0; i<v.size(); i++){
        m[i]=v[i];
    }
    for (auto x:m){
        cout << x.first << "->" << x.second << endl;
    }
}