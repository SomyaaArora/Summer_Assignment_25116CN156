//To create ATM Stimulation
#include<bits/stdc++.h>
using namespace std;
int main()
{   cout << "--------ATM Stimulation----------\n";
    int pin,ch,amount,withdraw; //initialising variables
    int balance=5000;
    cout << "Enter your 4 digit pin";
    cin >> pin;
    if(pin!=1234){
        cout << "Invalid pin";
        return 0;
    }
    cout << "Enter 1 for balance check\n Enter 2 for deposit money \n Enter 3 for withdraw money \n Enter 4 for exit \n";
    cout << "Enter your choice\n";
    cin >> ch;
    switch(ch){
        case 1:
        cout << "Current balance = Rs" << balance << "\n";
        break;
        case 2:
        cout << "Enter amount to be deposited\n";
        cin >> amount;
        balance+=amount;
        cout << "Amount deposited successful\n";
        cout << "Updated balance = Rs"<< balance << "\n";
        break;
        case 3:
        cout << "Enter amount to withdraw\n";
        cin >> amount;
        if(amount<=balance){
            balance-=amount;
            cout << "Please collect your cash \n";
            cout << "Remaining balance =Rs" << balance << "\n";
        }
        else {
            cout << "Insuficient balance\n";
        }
        break;
        case 4:
        cout << "Thanks for using the ATM\n";
        break;
        default :
        cout << "Wrong choice input\n";
    }
    
    return 0;  
}
