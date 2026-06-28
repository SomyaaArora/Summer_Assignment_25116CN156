// To find transpose of the matrix
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j; //initialising variables
    cout << "Enter the number of rows and columns of the matrices\n ";
    cin >> r >> c;
    int a[r][c],t[r][c];
    for(i=0;i<r;i++){ //Input elements of the matrix
        for(j=0;j<c;j++){
            cin >> a[i][j];
        }   
    } 
    for(i=0;i<r;i++){ //Transpose of the matrix
        for(j=0;j<c;j++){
            t[j][i]=a[i][j];
        }   
    } 

    
    cout << "Transpose of the matrix is : \n";
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            cout << t[i][j] << " ";
        }
        cout << "\n";
    } 
    return 0;    
}      