// To reverse an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,temp; //initialising variables
    cout << "Enter the size of an array   \n ";
    cin >> n ;
    int a[n];
    for(i=0;i<n;i++){ //Input array elements
        cin >> a[i];
    }
    for(j=0;j<n/2;j++)//Reverse an array
    {
        temp=a[j];
        a[j]=a[n-1-j];
        a[n-1-j]=temp;
    }
    cout << "Reverse of an array is \n";
     for(i=0;i<n;i++){ //
        cout << a[i] << " ";
     }

    return 0;    
}      
