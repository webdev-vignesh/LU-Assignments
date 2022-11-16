// sum of array elements
#include <iostream>
using namespace std;

int total(int a[5])
{
    int sum=0;
    for(int i=0; i<5; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int main() {
    int a[5];
    cout<<"Enter the value of each elements:\n";
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    int result = total(a);
    cout<<"Sum of all elements: "<<result;

    return 0;
}
