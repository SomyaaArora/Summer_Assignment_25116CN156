// To find sum of the diagonal elements of the matrix
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,s; //initialising variables
    cout << "Enter the order of square matrix\n ";
    cin >> n ;
    s=0;
    int a[n][n];
    for(i=0;i<n;i++){ //Input elements of the matrix
        for(j=0;j<n;j++){
            cin >> a[i][j];
        }   
    }//To add diagonal elements 
    for(i=0;i<n;i++){ 
        for(j=0;j,n;j++){
            if(i==j||i+j==n-1){
                s = s + a[i][j];
            }
           
        }
    }
    cout << "Sum of diagonal elements is: " << s ;
    return 0;    
}      