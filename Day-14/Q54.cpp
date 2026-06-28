// Frequency of an element in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,e,f; //initialising variables
    cout << "Enter the size of an array   \n ";
    cin >> n ;
    int a[n];
    for(i=0;i<n;i++){ //Input array elements
        cin >> a[i];
    }
    cout << "Enter the element find the frequency of \n";
    cin >> e;
    f=0;
    for(j=0;j<n;j++){
        if(a[j]==e){
           f++;
    }
    }
    cout << "Frequency of " << e << " is " << f ;
    return 0;   
}  
