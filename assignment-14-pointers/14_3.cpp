// pointers
#include <iostream>
using namespace std;

int main() {
    int a[] = {3, 9, 2, 1, 7, 8, 4};
    int *p = a;
    int *q = a+3;
    int *r = a+5;
    cout<<p<<" "<<*p+5<<endl;
    cout<<*r<<" "<<*q<<" "<<r<<" "<<q<<endl;
    cout<<*q+1<<" "<<*(q+1)<<endl;

    return 0;
}

// Output: 
// 0x7ffce3b69610 8
// 8 1 0x7ffce3b69624 0x7ffce3b6961c
// 2 7
