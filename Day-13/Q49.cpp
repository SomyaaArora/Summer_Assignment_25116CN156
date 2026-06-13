// To input and display array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j; //initialising variables
    cout << "Enter the size of an array   \n ";
    cin >> n  ;
    int a[n];
    for(i=0;i<n;i++){ //Input array elements
        cin >> a[i];
    }
    for(j=0;j<n;j++){ //Display array elements
        cout << a[j] << " ";
    }

    return 0;     
}