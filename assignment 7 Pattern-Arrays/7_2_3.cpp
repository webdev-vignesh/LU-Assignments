// sum of array elements
#include <iostream>
using namespace std;

int a[5]; //declaring array globally

void total(int a[5]) //function to add all elements
{
    int sum=0;
    for(int i=0; i<5; i++)
    {
        sum = sum + a[i];
    }
    cout<<"Sum of all elements: "<<sum; //printing the sum of array elements
}

int main() {
    cout<<"Enter the value of each elements:\n";
    for(int i=0; i<5; i++)
    {
        cin>>a[i];    
    }
    total(a); //calling total function
  
    return 0;
}
