//To create library management system
#include<bits/stdc++.h>
using namespace std;
int main()
{   int bookid,price; //initialising variables
    string bookname,author;
    cout << "--------Library Management System----------\n";
    cout << "Enter Book ID\n";
    cin >> bookid;
    cin.ignore();//ignore the leftover new lines
    cout << "Enter Book Name\n";
    getline(cin,bookname);
    cout << "Enter Author Name \n";
    getline(cin,author);
    cout << "Enter Book Price\n";
    cin >> price;
    cout << "-----Book Details-----\n";
    cout << "Book ID :" << bookid << "\n";
    cout << "Book Name :" << bookname << "\n";
    cout << "Author Name :" << author << "\n";
    cout << "Book Price :" << price << "\n";
    return 0;  
}