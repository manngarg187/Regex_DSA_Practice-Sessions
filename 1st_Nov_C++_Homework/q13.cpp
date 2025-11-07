
// 3. Write a program to print all Armstrong numbers between 1 and 1000. 

// An Armstrong number is a number that is equal to the sum of its own digits, each raised to the power of the total number of digits. For example, 153 is a 3-digit Armstrong number because \(1^{3}+5^{3}+3^{3}=1+125+27=153\). This concept is also known as a narcissistic number.     

/*
Rough Brainstorming:
1. count the digits in particular number (slice the number)
2. find the total value after adding each digit's powered value 
3. if main value is equal to the sum of individual digit's powered value then print them number
*/ 

#include <iostream>
using namespace std;
int main(){
    for (int i=1; i<=1000; i++){
        int num_d = 0;
        int original = i;
        while (original>0){
            original = original/10;
            num_d = num_d +1;
        }
        original = i;
        int sum = 0;
        int digit;
        while (original>0){
            digit = original%10;
            int value=1;
            for (int j=0; j<num_d; j++){
                value = value*digit;
            }
            sum = sum + value;
            original = original/10;  // IMPORTANT NOTE: I earlier missed this line because of which I went into infinite loop bcoz the value of original was not getting smaller with each iteration so original always stayed greater than 0 for the while loop
        }
        if (sum == i){
            cout << i << " ";
        }
    }
}