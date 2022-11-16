// sum of array elements
#include <iostream>
using namespace std;

void total() //function to add array of elements
{
    int a[5]; //declaring array in external function
    cout<<"Enter the value of each elements:\n";
    for(int i=0; i<5; i++) //taking user input 
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0; i<5; i++) //adding values in loop
    {
        sum = sum + a[i];
    }
    cout<<"Sum of all elements: "<<sum; //printing sum of array elements
}

int main() {
    total(); //calling external total function

    return 0;
}
