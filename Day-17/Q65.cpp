// To merge array 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,i,j,k,l; //initialising variables
    cout << "Enter the size of first array \n ";
    cin >> n1;
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
        c[k]=a[k];
    }//Merge both arrays
    for(l=0;l<n2;l++)
    {
        c[n1+l]=b[l];
    }
    cout << "The merge arrays are \n";
    for(i=0;i<n1+n2;i++)
    {
        cout << c[i] << " ";   
    }
    
    return 0;    
}      
