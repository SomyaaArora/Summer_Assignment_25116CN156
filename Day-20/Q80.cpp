// To find sum of columns of the matrix
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,sum,j; //initialising variables
    cout << "Enter the number of rows and columns of the matrices\n ";
    cin >> r >> c;
    int a[r][c];
    for(i=0;i<r;i++){ //Input elements of the matrix
        for(j=0;j<c;j++){
            cin >> a[i][j];
        }   
    } 
    for(i=0;i<c;i++){ // Sum of columns
        sum=0;
        for(j=0;j<r;j++){
            sum=sum+a[j][i];
        }
        cout << "Sum of column " << i+1 <<" is " << sum << "\n";
        }  
        cout << "\n";

    return 0;         
}