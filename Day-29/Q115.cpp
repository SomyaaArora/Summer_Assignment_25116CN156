//To create Menu driven string operations
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int ch,i; //initialising variables
    string s;
    cout <<"Enter the string \n";
    getline(cin,s);
    do
    {   
        cout << "1.Display\n 2.Length \n 3.Reverse\n 4.Exit\n";
        cout << "Enter your choice\n";
        cin >> ch;
               
        switch(ch)
        {
            case 1:
            cout << "String :"<< s;
            break;
            case 2:
            cout << "Length :" << s.length();
            break;
            case 3:
            cout << "Reversedd String :";
            for(i=s.length()-1;i>=0;i--){
                cout << s[i];
            }
            break;
            case 4:
            cout << "Thank you!\n";
            break;
            default :
            cout << "Invalid choice!\n";
        }
        /* code */
        
    } while (ch!=4);
    
    return 0;  
}