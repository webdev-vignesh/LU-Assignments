
#include <iostream>
using namespace std;

int main() {
    int choice;
    cout<<"Please enter your choice: \n"<<"1. for coffee \n"<<"2. for tea\n";
    cin>>choice;
    
    if(choice == 1) 
    {
        cout<<"Please enjoy your coffee";
    }
    else if(choice == 2)
    {
        cout<<"Please enjoy your tea";
    }
  else
    {
        cout<<"Wrong input entered. Please enter correct choice";
    }

    return 0;
}
