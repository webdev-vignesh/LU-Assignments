//Program to check whether a number is even or odd
#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter a number: \n";
    cin>>a;
    
    if(a%2 == 0)
    {
        cout<<"Entered number "<<a<< " is Even";
    }
    else
    {
        cout<<"Entered number "<<a<<" is Odd";
    }

    return 0;
}
