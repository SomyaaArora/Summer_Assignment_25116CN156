//To create student record system using arrays and strings 
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    cout << "Enter size of an array\n";
    int n,m,i;
    cin >> n;
    int roll[n]; //initialising variables
    string name[n];
    float marks [n];
    int ch;
    m=0;
    do
    {   
        cout << "----Student Record System ---\n";
        cout << "1.Add Student\n 2.Display Students \n 3.Exit\n";
        cout << "Enter your choice\n";
        cin >> ch;
               
        switch(ch)
        {
            case 1:
            cout << "Enter Roll no.:\n";
            cin >> roll[m];
            cin.ignore();
            cout << "Enter name :\n";
            getline(cin,name[m]);
            cout <<"Enter Marks :\n";
            cin >> marks[m];
            m++;
            cout << "Student Record added successfully!\n";
            break;
            case 2:
            if(n==0)
            {
                cout << "No records found!\n";
            }
            else{
                cout << "Roll\t Name\t Marks\n";
                for(i=0;i<n;i++){
                    cout << roll[i] <<"\t" << name[i] << "\t" << marks[i] << "\n" ;
                }
            }
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