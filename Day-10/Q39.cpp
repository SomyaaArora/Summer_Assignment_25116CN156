// To print number pyramid 
#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int i,j,k,l;//initialising variables
    for(i=1;i<=5;i++)//outer loop
    {
        for(j=1;j<=5-i;j++){//space loop
            cout << " ";
        }
        for(k=1;k<=i;k++)//print increasing numbers
        {
            cout << k ;
        }
        for(l=i-1;l>=1;l--){//print decreasing numbers
            cout << l ;
        }
        cout << "\n";
    }
    return 0;
}