// To find maximum frequency element
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,j,c,m,f; //initialising variables
    cout << "Enter the size of an array \n ";
    cin >> n ;
    int a[n];
    f=0;
    m=a[0];
    for(i=0;i<n;i++){ //Input array elements
        cin >> a[i];
    }
    for(j=0;j<n;j++)
    {
        c=0;
        for(k=0;k<n;k++)
        {
            if(a[j]==a[k])
            {
                c++;
            }
        }
        if (c>f)
        {
            f=c;
            m=a[j];
        }
    }
    cout << "Maximum frequency element is " << m << " and its frequency is " << f ;
    return 0;    
}      
