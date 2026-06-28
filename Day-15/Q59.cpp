// To rotate an array to right
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
        temp=a[n-1];
        for (i=n-1;i>0;i--){
            a[i]=a[i-1];
        }
        a[0]=temp;
    }
    cout << "Array after right rotation is  \n";
     for(i=0;i<n;i++){ //
        cout << a[i] << " ";
     }

    return 0;    
}      
