//To create contact management system
#include<bits/stdc++.h>
using namespace std;
int main()
{   long long num;
    int ch; //initialising variables
    string name,email;
    cout << "--------Contact Management System----------\n";

    do
    {   
        cout << "1.Add contacts \n 2.Display Contacts \n 3.Exit \n";
        cout << "Entyer your choice";
        cin >> ch;
        cin.ignore();
        switch(ch)
        {
            case 1:
            cout << "Enter Name\n";
            getline(cin,name);
            cout << "Enter Mobile Number \n";
            cin >> num;
            cin.ignore();
            cout << "Enter Email\n";
            getline (cin,email);
            cout << "Contact Saved Successfully!\n";
            break;
            case 2:
            cout << "----Contact Details----\n";
            cout << "Name : "<< name << "\n";
            cout << "Mobile : "<< num << "\n";
            cout << "Email : "<< email << "\n";
            break;
            case 3:
            cout << "Thank you!\n";
            break;
            default :
            cout << "Invalid choice!\n";
        }
        /* code */
        
    } while (ch!=3);
    
    return 0;  
}