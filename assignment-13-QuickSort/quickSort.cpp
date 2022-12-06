// Quick Sort
#include <iostream>
using namespace std;

int partition(int a[], int s, int e) //function to perform partition
{
    int pivot = a[e];
    int i = s-1;
    int temp;
    
    for(int j = s; j< e; j++ )
    {
        if(a[j] < pivot)
        {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    i++;
    a[e] = a[i];
    a[i] = pivot;
    return i;
}

void qs(int a[], int s, int e) // Quick Sort function
{   
    if (s < e)
    {
        int k = partition(a, s, e);
        qs(a, s, k-1);
        qs(a, k+1, e);
    }
}

void displayArray(int arr[], int size) //fuction to display array values
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<arr[i]<<"\t"; 
}

int main() {
    int a[] = {8, 3, 7, 2, 9, 6, 5, 11};
    int n = sizeof(a)/sizeof(int);
    cout<<"Array before applying Quick Sort:\n";
    displayArray(a, n);
    
    qs(a, 0, n-1); //Quick sort function
    
    cout<<"\nArray after applying Quick Sort:\n";
    displayArray(a, n);
    return 0;
}
