// Insertion sort
#include <iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    int key, j;
    for(int i=1; i<n; i++)
    {
        key = a[i];
        j = i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        
        //printing output array of each pass 
        cout<<"\n"<<i<<"th pass:\n"; 
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
    
    insertionSort(a, n);  //calling user-defined function for insertion sort
    
    return 0;
}
