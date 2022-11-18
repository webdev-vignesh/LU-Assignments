// Linear search
#include <iostream>
using namespace std;

int main() {
    int a[]= {2,7,9,6,11,24,10};
    cout<<"Enter the value you want to find: ";
    int val, i;
    cin>>val;
    int n = sizeof(a)/sizeof(int);
    for(i=0; i<n; i++)
    {
        if(a[i] == val)
        {
            cout<<val<<" found at index "<<i;
            break;
        }
    }
    if(i == n)
    {
        cout<<"Entered value not found in the array";
    }
    
    return 0;
}
