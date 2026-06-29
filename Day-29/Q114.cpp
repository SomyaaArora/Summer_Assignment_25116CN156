//To create Menu driven array operations
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int ch,n,a[100],i,x,f,max,min; //initialising variables
    cout << "Enter number of elements \n";
    cout <<"Enter elements\n";
    for(i=0;i<n;i++){
        cin >> a[i];
    }

    do
    {   
        cout << "1.Display\n 2.Search \n 3.Maximum \n 4.Minimum \n 5.Exit\n";
        cout << "Enter your choice\n";
        cin >> ch;
               
        switch(ch)
        {
            case 1:
            for(i=0;i<n;i++){
                cout << a[i] << " ";
            }
            break;
            case 2:
            f=0;
            cout << "Enter the element to be searched";
            cin >> x;
            for(i=0;i<n;i++){
                if(a[i]==x){
                    f=1;
                    cout << "Element found at" << n+1 << "position\n"; 
                    break;
                }
            }
            if(f==0){
                cout << "Element not found \n";
            }
            break;
            case 3:
            max=a[0];
            for(i=1;i<n;i++)
            {
                if(a[i]>max){
                    max=a[i];
                }
            }
            cout << "Maximum element is :"<< max << "\n";
            break;
            case 4:
            min=a[0];
            for(i=1;i<n;i++)
            {
                if(a[i]<min){
                    min=a[i];
                }
            }
            cout << "Minimum element is :"<< min << "\n";
             
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