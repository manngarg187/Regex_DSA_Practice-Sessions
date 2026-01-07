// Take input of 5 values in a queue by the user and then print all the values in the same order!

#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue <int> q;
    for (int i=1; i<=5; i++){
        int x;
        cout << "Enter the " << i << "value : " << endl;
        cin >> x;
        q.push(x);
    }
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}