// To print reverse star pyramid 
#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int i,j,k,l;//initialising variables
    for(i=4;i>=0;i--)//outer loop
    {
        for(j=4-i-1;j>=0;j--){//space loop
            cout << " ";
        }
    
        for (k=2*i+1;k>0;k--)//star loop
        {
            cout << "*";
        }
         for(l=4-i-1;l>=0;l--){//space loop
            cout << " ";
        }
    

        cout << "\n";
    }
}

