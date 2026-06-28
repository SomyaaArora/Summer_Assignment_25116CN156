//To create bank account system
#include<bits/stdc++.h>
using namespace std;
int main()
{   int accNo,ch;//initialising variables
    string name;
    float balance ,amount;
    cout << "--------BANK ACCOUNT SYSTEM----------\n";
    cout << "Enter your account number\n";
    cin >> accNo;
    cin.ignore();
    cout << "Enter account holder name\n";
    getline(cin,name);
    cout << "Enter initial balance\n";
    cin >> balance;
    do{
        cout <<"----Menu----\n";
        cout << "1.Deposit\n 2.Withdraw \n3.Check Balance \n4.Account Details\n5.Exit \n";
        cout << "Enter your choice\n";
        cin >> ch;
        switch(ch){
            case 1:
            cout << "Enter amount to be deposited\n";
            cin >> amount;
            balance+=amount;
            cout << "Amount deposited successful\n";
            cout << "Updated balance = Rs"<< balance << "\n";
            break;
            case 2:
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
            case 3:
            cout << "Current Balance :" << balance << "\n";
            break;
            case 4:
            cout << "----ACCOUNT DETAILS----\n";
            cout << "Account Number : " << accNo << "\n";
            cout << "Account Holder : " << name << "\n";
            cout << "Balance : " << balance << "/n";
            break;
            case 5:
            cout << "Thank You!\n";
            break;
            default:
            cout << "Invalid choice \n";
       }
        
    }while (ch!=5);
    
    return 0;  
}
