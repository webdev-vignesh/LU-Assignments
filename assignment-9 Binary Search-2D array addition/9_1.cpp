// Binary search
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int start, int end)
{
    int val;
    cout<<"Enter the value to found: \n";
    cin>>val;
    int x=0, mid;
    while(start<= end)
    {
        mid = (start + end)/2;
        if(val == arr[mid]) //checking if value is equal to middle value
        {
            x=1;
            break;
        }
        else if(val<arr[mid]) //checking if value is less than middle value
        {
            end=mid-1;
        }
        else //checking if value is greater than middle value
        {
            start=mid+1;
        }
    }
    if(x == 0)  //condition if value not found
    {
        cout<<"entered value not found";
    }
    else  //condition if value found
    {
        cout<<val<<" found at index "<<mid;
    }
}


int main() {
    int arr[]= {2,5,9,10,13,16,19,22,54};
    int n = sizeof(arr)/ sizeof(int); //finding length of the array
    int start = 0;
    int end = n-1;
    
    binarySearch(arr, n, start, end); //function to execute binary search
    
    
    return 0;
}
