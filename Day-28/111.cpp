//To create ticket booking system
#include<bits/stdc++.h>
using namespace std;
int main()
{   int seats;//initialising variables
    string name,movie;
    float price,total;
    cout << "--------Ticket booking System----------\n";
    cout << "Enter customer name :\n";
    getline(cin,name);
    cout << "Available movies\n";
    cout << "1.Dhurandar(300)\n2.Avengers(250)\n3.Micheal(200)\n";
    int ch;
    cout << "Enter your choice\n";
    cin >> ch;
    switch(ch){
        case 1:
        movie="Dhurandar";
        price=300;
        break;
        case 2:
        movie="Avengers";
        price=250;
        break;
        case 3:
        movie= "Micheal";
        price=200;
        break;
        default :
        cout << "Invalid choice";
    }
    cout << "Enter the number of tickets\n";
    cin >> seats;
    total=seats*price;
    cout <<"-----Booking Details------\n";
    cout << "Customer Name " << name << "\n";
    cout << "Movie Name " << movie << "\n";
    cout << "No. of tickets " << seats << "\n";
    cout << "Price/Ticket Rs." << price << "\n";
    cout << "Total amount  Rs." << total << "\n";
    cout << "Booking successful!";
    return 0;  
}