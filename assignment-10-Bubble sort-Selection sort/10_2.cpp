// Selection sort
#include <iostream>
using namespace std;

void swap(int a[], int n) //user-defined function for selection sort operation
{
    int temp, min, j;
    for(int i=0; i<n; i++)
    {
        min = i; 
        for(j=i+1; j<n; j++)
        {
            if(a[min] > a[j]) //condition to check min value in array
            {
                min = j; 
            }
        }
        //swap
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
        
        //printing output array of each pass 
        cout<<"\n"<<i+1<<"th pass:\n"; 
        for(int i=0; i<n; i++)
        cout<<a[i]<<"\t";
    }
    
    cout<<"\nFinal output:\n";
    for(int i=0; i<n; i++)
    cout<<a[i]<<"\t";
}


int main() {
    int a[] = {5, 3, 9, 2, 11, 4, 19, 15};
    int n = sizeof(a)/sizeof(int);
    
    cout<<"Original array: \n";
    for(int i=0; i<n; i++)
    cout<<a[i]<<"\t";
    
    swap(a, n); //calling swap fucntion

    return 0;
}
