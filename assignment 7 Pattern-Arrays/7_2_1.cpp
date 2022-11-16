// sum of array elements
#include <iostream>
using namespace std;

int total(int a[5]) //function to add the array elements
{
    int sum=0;
    for(int i=0; i<5; i++) //loop to add array elements
    {
        sum = sum + a[i];
    }
    return sum; //returning sum value
}

int main() {
    int a[5];
    cout<<"Enter the value of each elements:\n";
    for(int i=0; i<5; i++) //loop to take user input of array elements
    {
        cin>>a[i];
    }
    int result = total(a); //calling external function with parameter
    cout<<"Sum of all elements: "<<result; //printing the obtained result

    return 0;
}
