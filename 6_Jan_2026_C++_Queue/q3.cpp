// Take input of 5 values and print their sum

#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue <int> q;
    for (int i=1; i<=5; i++){
        int x;
        cout << "Enter the " << i << " value : "<< endl;
        cin >> x;
        q.push(x);
    }
    int sum=0;
    while (!q.empty()){
        sum = sum + q.front();
        q.pop();
    }
    cout << sum;
}