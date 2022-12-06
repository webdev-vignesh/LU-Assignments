// call by value, reference
#include <iostream>
using namespace std;

void fun(int a, int b)  //call by value function
{
    int temp = a;
    a = b;
    b = temp;
    cout<<"Call by value:\n";
    cout<<"After swap: \n"<<a<<" "<<b<<endl; //after swapping
}

void fun2(int *a, int *b)  //call by reference function
{
    int *temp = a;
    a = b;
    b = temp;
    cout<<"\nCall by reference:\n";
    cout<<"After swap: \n"<<a<<" "<<b<<endl; //after swapping
}

int main() 
{
    int a = 20;
    int b = 30;
    fun(a, b); //call by value
    cout<<"Before swap: \n"<<a<<" "<<b<<endl; //before swapping
    
    fun2(&a, &b); //call by reference
    cout<<"Before swap: \n"<<&a<<" "<<&b<<endl; //before swapping
    
    return 0;
}
