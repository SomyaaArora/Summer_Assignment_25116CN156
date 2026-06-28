// To add matrices
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j; //initialising variables
    cout << "Enter the number of rows and columns of the matrices\n ";
    cin >> r >> c;
    int a[r][c],b[r][c],sum[r][c];
    for(i=0;i<r;i++){ //Input elements of first matrix
        for(j=0;j<c;j++){
            cin >> a[i][j];
        }
        
    } 
     for(i=0;i<r;i++){ //Input elements of second matrix
        for(j=0;j<c;j++){
            cin >> b[i][j];
        }
    } 
     for(i=0;i<r;i++){ //Adding both the matrices
        for(j=0;j<c;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    } 
    cout << "Sum of matrices are : \n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    } 
    return 0;    
}      