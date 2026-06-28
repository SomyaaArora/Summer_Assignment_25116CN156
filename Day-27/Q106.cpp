//To create employee management system
#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,i; //initialising variables
    cout << "Enter the number of employees\n";
    cin >> n;
    int id[n];
    string name[n];
    string department[n];
    float salary[n];

    cout << "--------Employee Management system----------\n";
    cout << "Enter id ,name ,department and salary of the employees \n";
    for(i=0;i<n;i++){
        cin >> id[i] >> name[i] >>  department[i] >> salary[i] ;
    }
    for(i=0;i<n;i++){
        cout << id[i] << "\n" <<  name[i] << "\n" << department [i] << "\n" << salary[i] << "\n";
    }


    return 0;  
}
