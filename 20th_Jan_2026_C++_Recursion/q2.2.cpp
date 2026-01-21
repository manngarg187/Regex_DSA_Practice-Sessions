
// Check palindrome for a number using recursion.
// Method 2

#include <iostream>
#include <vector>
using namespace std;

void palind_num(int num, int &rev){
    if (num==0) return;
    rev=rev*10 + num%10;
    palind_num(num/10,rev);
}

int main(){
    int num=12321;
    if (num%10==0) cout<< "false";
    int num_copy = num;
    int rev=0;
    palind_num(num,rev);
    if (num_copy==rev){
        cout << "Palindrom";
    }
    else{
        cout<< "false";
    }
}