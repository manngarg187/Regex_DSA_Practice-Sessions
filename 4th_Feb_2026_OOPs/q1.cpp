#include <iostream>
using namespace std;

class laptop{
    public:
    string name;
    string ram;
    int ssd;
};

int main(){
    laptop l1;
    l1.name="omen";
    l1.ram="24 GB";
    l1.ssd=1024;

    cout << l1.name<<endl;
    cout << l1.ram<<endl;
    cout << l1.ssd<<endl;

    laptop l2;
    l2.name="loq";
    l2.ram="16 GB";
    l2.ssd=512;

    cout << l2.name<<endl;
    cout << l2.ram<<endl;
    cout << l2.ssd;
}
