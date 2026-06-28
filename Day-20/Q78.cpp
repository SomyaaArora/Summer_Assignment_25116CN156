// To check matrix is symmetric
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,f; //initialising variables
    cout << "Enter the order of square matrix\n ";
    cin >> n;
    f=0;
    int a[n][n];
    for(i=0;i<n;i++){ //Input elements of the matrix
        for(j=0;j<n;j++){
            cin >> a[i][j];
        }   
    } 
    for(i=0;i<n;i++){ 
        for(j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){//Condition to check symmetric
                f=1;
                break;
            }
        }   
    } 

    if(f==0){
        cout << "Matrix is symmetric";
    } 
    else{
        cout << "Matrix is not symmetric";
    }
    return 0;    
}      