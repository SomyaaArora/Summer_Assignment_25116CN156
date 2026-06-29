//To create inventory management system
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int ch,price,quantity; //initialising variables
    string item;
    do
    {   
        cout << "----Inventory Management System----\n";
        cout << "1.Add Item\n 2.Display Item \n 3.Exit\n";
        cout << "Enter your choice\n";
        cin >> ch;
               
        switch(ch)
        {
            case 1:
            cout << "Enter Item Name:\n";
            cin >> item;
            cout << "Enter quantity :\n";
            cin >> quantity;
            cout <<"Enter price :\n";
            cin >> price;
            cout << "Item added successfully!";
            break;
            case 2:
            cout << " Item Name:"<< item << "\n";
            cin >> item;
            cout << "Quantity :"<< quantity <<"\n";
            cin >> quantity;
            cout <<"price :" << price << "\n";
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