// To find intersection of two arrays 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,i,j,k,l,p,f; //initialising variables
    cout << "Enter the size of first array \n ";
    cin >> n1;
    int a[n1];
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
    for(l=0;l<n1;l++)
    {
        f=0;
        for(i=0;i<n2;i++)
        {
            if(a[l]==b[i])
            {// To check a[l] is present in second array or not
              f=1;
              break;
            }
        }
        p=0;
        //To check if element is already printed or not
        for(k=0;k<l;k++)
        {
            if(a[l]==a[k]){
                p=1;
                break;
            }
        }
        if(f!=p)//To print intersection of an array 
        {
            cout<< a[l] << " ";
          
        }        
    }   
    return 0;    
}      