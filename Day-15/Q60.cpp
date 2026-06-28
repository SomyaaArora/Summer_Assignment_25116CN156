// To move zero values at the end
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,j,t; //initialising variables
    cout << "Enter the size of an array   \n ";
    cin >> n ;
    int a[n];
    for(i=0;i<n;i++){ //Input array elements
        cin >> a[i];
    }
    t=0;
    for(j=0;j<n;j++){//Moving non zero values in front
        if(a[j]!=0){
            a[t]=a[j];
            t++;
        }

    }
    while (t<n)// Assigning zero to the remaining values
    {
        a[t]=0;
        t++;
    }
    cout << "The final array is : \n";
    for (k=0;k<n;k++){
        cout << a[k] << " ";
    }
    return 0;    
}      
