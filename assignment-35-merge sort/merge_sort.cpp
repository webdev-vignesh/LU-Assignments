//  Merge Sort
#include <iostream>
using namespace std;

void merge(int a[], int l, int mid, int u)
{
    int i,j,k;
    int n1 = mid-l+1;
    int n2 = u-mid;
    
    int LArr[n1], RArr[n2];
    
    for(int i=0; i<n1; i++)
    LArr[i] = a[l+i];
    for(int j=0; j<n2; j++)
    RArr[i] = a[mid+1+j];
    
    i=0;
    j=0;
    k=l;
    
    while(i < n1 && j < n2)
    {
        if(LArr[i] <= RArr[j])
        {
            a[k] = LArr[i];
            i++;           
        }
        else
        {
            a[k] = RArr[j];
            j++;    
        }
        k++;
    }
    while(i < n1)
    {
        a[k] = LArr[i];
        i++;
        k++;    
    }
    while(j < n2)
    {
        a[k] = RArr[j];
        j++;
        k++;    
    }
}

void mergeSort(int a[], int l, int u)
{
    if(l >= u)
    return;
    
    int mid = (l + u) / 2;
    mergeSort(a, l, mid);
    mergeSort(a, mid+1, u);
    merge(a, l, mid, u); 
}

void printArray(int a[], int n)
{
    for(int i=0; i<n; i++)
     cout<<a[i]<<" ";            
}

int main() 
{
    int a[] = {29, 13, 7, 15, 39, 25, 3, 86, 54};
    int n = sizeof(a)/sizeof(int);
    cout<<"Before sorting\n";
    printArray(a, n);
    mergeSort(a,0, n-1);
    cout<<"\nAfter sorting\n";
    printArray(a, n);    
    return 0;
}
