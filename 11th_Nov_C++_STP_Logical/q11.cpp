
// Find weather a given array is a palindrom or not
// Approach 3

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {1, 2, 3, 2, 1};
    
    vector<int> rev = arr;        // copy original array
    reverse(rev.begin(), rev.end()); // reverse the copy

    if (arr == rev) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}