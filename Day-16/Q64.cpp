// To remove duplicates in an array 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,c; //initialising variables
    cout << "Enter the size of an array \n ";
    cin >> n ;

    int a[n];
    for(i=0;i<n;i++){ //Input array elements
        cin >> a[i];
    }
    for(j=0;j<n;j++)
    {   
        c=0;
        for(k=0;k<j;k++)
        {
            if(a[j]==a[k])
            {
                c=1;
                break;
              
            }
        }
        if(c==0){//Print if duplicate does not exist
            cout << a[j] << " ";
        }
       
    }
    return 0;    
}      
