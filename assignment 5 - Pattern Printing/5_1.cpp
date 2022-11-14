// pattern printing
#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int n;
    cout<<"Enter a number: \n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(int k=1; k<=a; k++)
        {
            cout<<"*";
        }
        for(int l=1; l<=n-1; l++)
        {
            cout<<" ";
        }
        cout<<endl;
        a = a+2;
    }

    return 0;
}
