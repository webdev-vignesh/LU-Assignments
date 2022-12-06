// pointers
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *q = &a;
    int b = 50;
    int *p = &a;
    int *r = &b;
    int **y = &p;
    int **z = &r;
    cout<<p<<" "<<*p<<" "<<y<<" "<<**y<<endl;
    *p = 20;
    cout<<p<<" "<<*p<<" "<<a<<" "<<b<<" "<<*q<<" "<<**z;
    
    return 0;
}

// Answer:
// 0x7fff80510d18 10 0x7fff80510d20 10
// 0x7fff80510d18 20 20 50 20 50
