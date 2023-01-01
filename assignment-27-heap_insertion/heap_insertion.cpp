// heap insertion
#include <iostream>
using namespace std;


void insertion(int a[], int n, int val)
{   

    a[n] = val;
    int i = n;
    while(i >0)
    {
        int p = i/2;
        if(a[p] < a[i])
        {
            int temp = a[p];
            a[p] = a[i];
            a[i] = temp;
            
        }   
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main() {
    
    int a[] = {};
    int n = sizeof(a)/sizeof(int);
    
    insertion(a, n, 15);
    insertion(a, n, 25);
    insertion(a, n, 35);
    insertion(a, n, 45);
    
    printArray(a, n);
    
    return 0;
}
