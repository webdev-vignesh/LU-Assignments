// pattern printing
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: \n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        for(int k=1; k<=n; k++)
        {
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
