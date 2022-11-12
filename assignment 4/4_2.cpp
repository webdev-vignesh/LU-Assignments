// Addition and Multiplication using for loop
#include <iostream>
using namespace std;

int main() {
    int j = 1;
    int k = 0;
    int n;
    cout<<"Enter your choice for end limit\n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        k = k + i;
    }
    cout<<"Addition of 1 to "<<n<<" is "<<k;
    for(int i=1; i<=n; i++)
    {
        j = j * i;
    }
    cout<<"\nMultiplication of 1 to "<<n<<" is "<<j;
    return 0;
}
