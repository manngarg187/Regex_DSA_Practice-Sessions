
/*
3. Count frequency of each element in an array.
v={3,4,4,5,1,1,1,9,4,2}
Print the following output:
1->3
2->1
3->1
4->3
5->1
9->1
*/

#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    vector <int>v={3,4,4,5,1,1,1,9,4,2};
    map<int,int>m;
    
    // for insersting value in map
    for (auto x:v){
        m[x]++;
    }

    // for printing values of map
    //x.first for first value and x.second for second value
    for (auto x:m){
        cout << x.first << "->" << x.second << endl;
    }
}