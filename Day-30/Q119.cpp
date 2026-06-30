//To create mini Employee Management system
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    cout << "Enter size of an array\n";
    int n,i;
    cin >> n;
    int id[n],salary[n],ch,total=0,searchId;
    string name[n],search;
    do
    {   
        cout << "----EMPLOYEE MANAGEMENT SYSTEM ----\n";
        cout << "1.Add Employee\n2.Display Employee \n 3.Search Employee\n 4.Exit\n";
        cout << "Enter your choice\n";
        cin >> ch;
        cin.ignore();
               
        switch(ch)
        {
            case 1:
            cout << "Enter Employee ID";
            cin >> id[total];
            cin.ignore();
            cout << "\nEnter Employee Name ";
            getline(cin,name[total]);
            cout << "\nEnter Salary";
            cin >> salary[total];
            total++;
            cout << "\nEmployee Added Successfully!\n";
            break;
            case 2:
            if(total==0)
            {
                cout << "No employee records!\n";
            }
            else{
                cout << "ID\tName\tSalary\n";
                for(i=0;i<total;i++){
                    cout << id[i]<< "\t" << name[i] << "\t" << salary[i] << "\n" ;
                }
            }
            break;
            case 3:
            int f=0;
            cout << "Enter employee id to search!\n";
            cin>>searchId;
            for(i=0;i<total;i++){
                if(id[i]==searchId){
                    cout << "Employee Found\n";
                    cout << "ID:" << id[i] << "\n";
                    cout << "Name: " << name[i] << "\n";
                    cout << "Salary:" << salary[i] << "\n";
                    f=1;
                    break;
                }
            }
            if(f==0){
                cout << "Employee not found!\n";
            }
            break;
            case 4:
            cout << "Thank You!\n";
            break;
            default :
            cout << "Invalid choice!\n";
        }
        /* code */
        
    } while (ch!=4);
    
    return 0;  
}