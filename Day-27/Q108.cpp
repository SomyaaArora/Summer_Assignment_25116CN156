//To create marksheet generation system
#include<bits/stdc++.h>
using namespace std;
int main()
{   int roll,m1,m2,m3; //initialising variables
    string name;
    float total,percentage;
    cout << "Enter roll number\n";
    cin >> roll ;
    cout << "Enter Student Name\n";
    cin >> name;
    cout << "Enter marks in subject 1\n";
    cin >> m1;
    cout << "Enter marks in subject 2\n";
    cin >> m2;
    cout << "Enter marks in subject 3\n";
    cin >> m3;
    total =m1+m2+m3;
    percentage=(total/3);
    cout << "--------Marksheet----------\n";
    cout << roll  << "\n";
    cout << name << "\n";
    cout << "Total marks=" << total << "\n";
    cout << "Percentage =" << percentage << "\n";
    if(percentage>=40){
        cout << "Result : Pass";
    }
    else {
        cout << "Result : Fail";
    }
    return 0;  
}