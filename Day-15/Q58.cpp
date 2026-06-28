// To rotate an array to left
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,j,temp; //initialising variables
    cout << "Enter the size of an array   \n ";
    cin >> n ;
    int a[n];
    for(i=0;i<n;i++){ //Input array elements
        cin >> a[i];
    }
    cout << "Enter the value of k for rotation \n";
    cin >> k;
    k=k%n;
  
    for(j=0;j<k;j++)
    {
        temp=a[0];
        for (i=0;i<n-1;i++){
            a[i]=a[i+1];
        }
        a[n-1]=temp; 
    }
    cout << "Array after left rotation is  \n";
     for(i=0;i<n;i++){ //
        cout << a[i] << " ";
     }

    return 0;    
}      
