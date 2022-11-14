// pattern printing
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: \n";
    cin>>n;
    int a = ((2*n)-1);
    for(int i=1; i<=n; i++)
    {   
        for(int j=1; j<i; j++)
        {
            cout<<" ";
        }
        for(int k=1; k<=a; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        a = a-2;
    }

    return 0;
}
