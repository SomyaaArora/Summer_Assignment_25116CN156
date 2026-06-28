// Duplicate elements in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,s,l; //initialising variables
    cout << "Enter the size of an array   \n ";
    cin >> n ;
    int a[n];
    for(j=0;j<n;j++){ //Input array elements
        cin >> a[j];
    }
    for(i=0;i<n;i++){
        for(l=i+1;l<n;l++){
            if(a[i]==a[l])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }
    return 0;   
}  
