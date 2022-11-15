#include <iostream>
using namespace std;

int a=10,b=7;

void add() {
    int c = a+b;
    cout<<"Addition of a and b is: "<<c<<"\n";
}

void sub() {
    int c = a-b;
    cout<<"Subtraction of a and b is: "<<c<<"\n";
}

void mul() {
    int c = a*b;
    cout<<"Multiplication of a and b is: "<<c<<"\n";
}

void div() {
    int c = a/b;
    cout<<"Division of a and b is: "<<c<<"\n";
}

int main() {
    char q;
    do
    {
        int choice;
        cout<<"Welcome to Vignesh's Calculator\n"
        <<"What arithmetic operation would you like to perform:\n"
        <<"Enter 1 for Addition\nEnter 2 for Subtraction\n"
        <<"Enter 3 for Multiplication\nEnter 4 for Division\n";
        cin>>choice;
        if(choice == 1)
        {
            add();
        }
        else if(choice == 2)
        {
            sub();
        }
        else if(choice == 3)
        {
            mul();
        }
        else if(choice == 4)
        {
            div();
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
