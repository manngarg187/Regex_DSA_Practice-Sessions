// print even values of the queue

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
        if (q.front()%2==0){
            cout << q.front() << " " << endl;
        };
        q.pop();
    }
}