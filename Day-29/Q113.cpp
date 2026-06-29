//To create Menu driven calculator
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int ch; //initialising variables
    float num1,num2;
    cout << "--------Menu Driven Calculator----------\n";

    do
    {   
        cout << "1.Adition \n 2.Subtraction \n 3.Multiplication \n 4.Division\n 5.Exit\n";
        cout << "Enter your choice\n";
        cin >> ch;
        if(ch>=1&&ch<=4){
            cout << "Enter Two numbers :\n";
            cin >> num1 >> num2;
        }
        switch(ch)
        {
            case 1:
            cout << "Result =" << num1+num2 << "\n ";
            break;
            case 2:
            cout << "Result =" << num1-num2 << "\n ";
            break;
            case 3:
            cout << "Result =" << num1*num2 << "\n ";
            break;
            case 4:
            if(num2!=0)
                cout << "Result =" << num1+num2 << "\n ";
            else 
                cout << "Zero division error\n" ;   
            break;
            case 5 :
            cout << "Thank you!\n";
            break;
            default :
            cout << "Invalid choice!\n";
        }
        /* code */
        
    } while (ch!=5);
    
    return 0;  
}