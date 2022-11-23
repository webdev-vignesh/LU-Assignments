// Bubble sort
#include <iostream>
using namespace std;

int main() {
    int a[] = {5, 3, 9, 2, 11, 4, 19, 15};
    int n = sizeof(a)/sizeof(int);
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(a[j] > a[j+1]) //condition to compare 2 values 
            {
                //swapping values
                int temp=a[j]; 
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        //printing output array of each pass 
        cout<<"\n"<<i+1<<"th pass:\n"; 
        for(int i=0; i<n; i++)
        cout<<a[i]<<"\t";
    }
    
    cout<<"\nFinal output:\n";
    for(int i=0; i<n; i++)
    cout<<a[i]<<"\t";
    
    return 0;
}
