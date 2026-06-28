// Linear search in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,s,l; //initialising variables
    cout << "Enter the size of an array   \n ";
    cin >> n ;
    int a[n];
    for(i=0;i<n;i++){ //Input array elements
        cin >> a[i];
    }
    cout << "Enter the element to be search \n";
    cin >> s;
    l=0;
    for(j=0;j<n;j++){
        if(a[j]==s){
            cout << "Element found at position number " << j+1 ;
            l=1;
            break;
        }
    }
    if(l==0){
        cout << "Element not found";
    }
      return 0;   
}  
