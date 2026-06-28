// Matrix Multiplication
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,c1,r2,c2,sum,i,j,k; //initialising variables
    cout << "Enter the number of rows and columns of the first matrix\n ";
    cin >> r1 >> c1;
    int a[r1][c1];
    for(i=0;i<r1;i++){ //Input elements of first matrix
        for(j=0;j<c1;j++){
            cin >> a[i][j];
        } 
    } 
    cout << "Enter the number of rows and columns of the second matrix\n ";
    cin >> r2 >> c2;
    int b[r2][c2];
    int c[r1][c2];

     for(i=0;i<r2;i++){ //Input elements of second matrix
        for(j=0;j<c2;j++){
            cin >> b[i][j];
        }
    } 
    
    if (c1==r2)//Matrix Multiplication
    {
         for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                
                for(k=0;k<c1;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout << "Multiplication of matrix is : \n";
    
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            cout << c[i][j] << " ";
        }
        cout << "\n";
        } 
    }
    else {
        cout << "Matrix multiplication is not possible :";
    }
    return 0;    
}      