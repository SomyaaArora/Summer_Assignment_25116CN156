// Binary search
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,i,f,l,m,s,n; //initialising variables
    cout << "Enter the size of an array \n ";
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){ //Input array elements of first array
        cin >> a[i];
    } 
    l=0;
    h=n-1;
    f=0;
    cout << " Enter the element to be search \n";
    cin >> s;
    while(l<h){
        m=(l+h)/2;//Mid of an array
        if(a[m]==s){
            cout << "Element found at position : " << m+1   ;
            f=1;
            break; 
        }
        else if (s<a[m]){
            h=m-1;
        }
        else{
            l=m+1;
        }
    }
    if(f==0){
        cout << "Element not found";
    }
    return 0;    
}      