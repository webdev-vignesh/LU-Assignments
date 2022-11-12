// menu driven program 
#include <iostream>
using namespace std;
int main() {
    char choice;
    do
    {
        int option;
        cout<<"Welcome to our Cafe\n";
        cout<<"What would you like to have?\n"
        <<"1 for Coffee\n"<<"2 for Tea\n"<<"3 for Soft Drink\n"
        <<"4 for Burger\n";
        cin>>option;
        if(option == 1)
        {
            cout<<"Enjoy your Coffee\n";
        }
        else if(option == 2)
        {
            cout<<"Enjoy your Tea\n";
        }
        else if(option == 3)
        {
            cout<<"Enjoy your Soft Drink\n";
        }
        else if(option == 4)
        {
            cout<<"Enjoy your Burger\n";
        }
        else
        {
            cout<<"Wrong option. Please enter correct choice\n";
        }
        cout<<"Would you like to continue ordering?\n";
        cin>>choice;
    }
    while(choice == 'y');
    
    return 0;
}
