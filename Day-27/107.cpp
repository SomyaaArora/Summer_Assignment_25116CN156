//To create salary management system
#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,i; //initialising variables
    cout << "Enter the number of employees\n";
    cin >> n;
    int id[n];
    string name[n];
    float salary[n];
    float bonus[n];
    float total[n];
    cout << "--------Employee Management system----------\n";
    cout << "Enter id ,name ,salary and bonus of the employees \n";
    for(i=0;i<n;i++){
        cin >> id[i] >> name[i] >> salary[i] >> bonus[i] ;
    }
    for(i=0;i<n;i++){
        total[i]=bonus[i]+salary[i];
        cout << id[i] << "\n" <<  name[i] << "\n" << salary[i] << "\n" << total[i] << "\n";
    }


    return 0;  
}