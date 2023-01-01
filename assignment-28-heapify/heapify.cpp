// heapify
#include <iostream>
using namespace std;

void heapify(int a[], int n, int i)
{
    int max = i;
    int l = (2*i) + 1;
    int r = (2*i) + 2;
        
    if ( l < n && a[i] < a[l])
    {
        max = l;    
    }
    if (r < n && a[max] < a[r])
    {
        max = r;
    }
    if (max != i)
    {
        int temp = a[max];
        a[i] = a[max];
        a[max] = temp;
        
        heapify(a, max, n);
    }
}

void insertNode(int a[], int& n, int val)
{
    n = n+1;
    a[n-1] = val;
    heapify(a, n, n-1);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main() {
    int a[] = {17, 9, 13, 22, 6};
    int n = sizeof(a)/ sizeof(int);
    
    insertNode(a, n, 32);

    printArray(a, n);

    return 0;
}
