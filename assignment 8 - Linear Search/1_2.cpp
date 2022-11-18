// Linear search
#include <iostream>
using namespace std;

int main() {
    int a[]= {2,7,9,6,11,24,10};
    cout<<"Enter the value you want to find: ";
    int val, i;
    cin>>val;
    int n = sizeof(a)/sizeof(int);
    int x = 0;
    for(i=0; i<n; i++)
    {
        if(a[i] == val)
        {
            x =1;
            break;
        }
    }
    if(x == 0)
        cout<<"Entered value not found in the array";
    else 
        cout<<val<<" found at index "<<i;
    
    return 0;
}
