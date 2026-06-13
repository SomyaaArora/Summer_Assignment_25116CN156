// To find smallest and largest elementin an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,s,l; //initialising variables
    cout << "Enter the size of an array   \n ";
    cin >> n  ;
    int a[n];
    for(j=0;j<n;j++){ //Input array elements
        cin >> a[j];
    }
    l=a[0];
    s=a[0];
    for(i=1;i<n;i++){ //compairing to find smallest and largest element
        if (a[i]>l){
            l=a[i];
        }
        if(a[i]<s){
            s=a[i];
        }
    }   
        cout << "Largest element of an array is " << l << "\n Smallest element of an array is " << s;

      return 0;   
}  
