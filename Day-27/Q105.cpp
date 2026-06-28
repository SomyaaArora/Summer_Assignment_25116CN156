//To create student record management system
#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,i; //initialising variables
    cout << "Enter the number of students \n";
    cin >> n;
    int roll[n];
    string name[n];
    float marks[n];

    cout << "--------Student record----------\n";
    cout << "Enter roll number ,name and marks of the students \n";
    for(i=0;i<n;i++){
        cin >> roll[i] >> name[i] >> marks [i] ;
    }
    for(i=0;i<n;i++){
        cout << roll[i] << "\n" <<  name[i] << "\n" << marks [i] << "\n";
    }


    return 0;  
}
