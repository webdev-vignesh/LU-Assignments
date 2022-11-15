#include <iostream>
using namespace std;

int add(int a, int b) {
    int c = a+b;
    return c;
}

int sub(int a, int b) {
    int c = a-b;
    return c;
}

int mul(int a, int b) {
    int c = a*b;
    return c;
}

int divi(int a, int b) {
    int c = a/b;
    return c;
}

int main() {
    char q;
    do
    {
        int choice;
        int a,b;
        cout<<"Welcome to Vignesh's Calculator\n"
        <<"What arithmetic operation would you like to perform:\n"
        <<"Enter 1 for Addition\nEnter 2 for Subtraction\n"
        <<"Enter 3 for Multiplication\nEnter 4 for Division\n";
        cin>>choice;
        cout<<"Enter the value for a:\n";
        cin>>a;
        cout<<"Enter the value for b:\n";
        cin>>b;
        if(choice == 1)
        {
            int result = add(a,b);
            cout<<"Addition of a and b is: "<<result<<"\n";
        }
        else if(choice == 2)
        {
            int result = sub(a,b);
            cout<<"Subtraction of a and b is: "<<result<<"\n";
        }
        else if(choice == 3)
        {
            int result = mul(a,b);
            cout<<"Multiplication of a and b is: "<<result<<"\n";
        }
        else if(choice == 4)
        {
            int result = divi(a,b);
            cout<<"Division of a and b is: "<<result<<"\n";
        }
        else
        {
            cout<<"Please select correct option";
        }
        cout<<"Would you like to continue?\nEnter y or n\n";
        cin>>q;
    }while(q == 'y');
    cout<<"Thanks for using my calculator!!";
    
    return 0;
}
