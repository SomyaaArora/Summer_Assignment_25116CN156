// To find pair with the given sum 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,sum; //initialising variables
    cout << "Enter the size of an array \n ";
    cin >> n ;

    int a[n];
    for(i=0;i<n;i++){ //Input array elements
        cin >> a[i];
    }
    cout << "Enter the required sum \n ";
    cin >> sum;
    for(j=0;j<n;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if(a[j]+a[k]==sum)
            {
                cout << a[j] << " " << a[k] << "\n";
            }
        }
       
    }
    
    return 0;    
}      
