#include <iostream> 
using namespace std;

int main(){
    int x=2; // this line creates 'x' somewhere in the heap memory... we don't know it's memory location right now
    int * y = &x; // here ' &x ' gives the memory location of 'x'... but we can't store a memory location, so in C++ what you do is 'you store a pointer to it'... so we now have a unique pointer to that memory location that is stored in 'y'
    cout << "value of x : "<< x << endl;
    cout << "value of y (or) value of the pointer which points to the memory location where x is stored : " << y << endl;
    cout << "Value at that address (→ 2) : " << *y << endl;
}

// Output : 0x16fb7f0bc - this is the pointer which points to the memory location where 'x' is stored!

// NOTE : Every time you run the program a unique pointer will be created for the same memory location! for example, if I run this program only, I get following:

// Run 1 :
// value of x : 2
// value of y (or) value of the pointer which points to the memory location where x is stored : 0x16b10706c
// Value at that address (→ 2) : 2

// Run 2 :
// value of x : 2
// value of y (or) value of the pointer which points to the memory location where x is stored : 0x16f10b09c

// Run 3 :
// value of x : 2
// value of y (or) value of the pointer which points to the memory location where x is stored : 0x16af1309c