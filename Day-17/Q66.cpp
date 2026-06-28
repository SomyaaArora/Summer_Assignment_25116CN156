// To give union of two arrays 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,i,j,k,l,f,t; //initialising variables
    cout << "Enter the size of first array \n ";
    cin >> n1;
    t=0;
    int a[n1];
    int c[100];
    for(i=0;i<n1;i++){ //Input array elements of first array
        cin >> a[i];
    } 
    cout << "Enter the size of second array \n ";
    cin >> n2;
    int b[n2];
    for(j=0;j<n2;j++)//Input array elements of se
    {
        cin >> b[j];
    }
    for(k=0;k<n1;k++)
    {
        c[t++]=a[k];
        
    }
    for(l=0;l<n2;l++)
    {
        f=0;
        for(i=0;i<t;i++)
        {
            if(c[l]==b[i])
            {// To check element is present in first array or not
              f=1;
              break;
            }
        }
        if(f==0)
        {//Addimg unique elements
            c[t]=b[l];
            t++;
        }
    }
    cout << "The union of two arrays are \n";
    for(i=0;i<t;i++)
    {
        cout << c[i] << " ";   
    }
    
    return 0;    
}      