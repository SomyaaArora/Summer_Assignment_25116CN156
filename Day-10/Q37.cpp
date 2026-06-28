// To print star pyramid 
#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int i,j,k,l;//initialising variables
    for(i=0;i<=4;i++)//outer loop
    {
        for(j=0;j<=4-i-1;j++){//space loop
            cout << " ";
        }
    
        for (k=0;k<2*i+1;k++)//star loop
        {
            cout << "*";
        }
        for(l=0;l<=4-i-1;l++){//space loop
            cout << " ";
        }
    

        cout << "\n";
    }
}

