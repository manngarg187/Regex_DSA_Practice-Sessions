
// Find the largest element in an Array
// Approch 1

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {1, 8, 7, 6, 4};
    int size = 5;
    sort(arr, arr + size);
    cout << arr[size - 1];
}

