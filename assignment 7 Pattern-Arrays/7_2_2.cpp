// sum of array elements
#include <iostream>
using namespace std;

void total()
{
    int a[5];
    cout<<"Enter the value of each elements:\n";
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0; i<5; i++)
    {
        sum = sum + a[i];
    }
    cout<<"Sum of all elements: "<<sum;
}

int main() {
    total();

    return 0;
}
