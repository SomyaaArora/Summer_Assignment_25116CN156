// To find missing number in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,es,sum,m; //initialising variables
    cout << "Enter the size of an array   \n ";// values from 1-n
    cin >> n ;
    int a[n-1];//One number is missing
    sum=0;
    for(i=0;i<n-1;i++){ //Input array elements
        cin >> a[i];
        sum=sum+a[i];
    }
    es=n*(n+1)/2;
    m=es-sum;
    cout << "Missing number is " << m;
    
    return 0;    
}      
