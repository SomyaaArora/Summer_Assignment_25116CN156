// To print character pyramid 
#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int i,j,k,l,s;//initialising variables
    s=1;
    for(i=65;i<=69;i++)//outer loop
    {
        for(j=1;j<=5-s;j++){//space loop
            cout << " ";
        }
        s++;
        for(k=65;k<=i;k++)//print increasing characters
        {
            cout << char(k)  ;
        }
        for(l=i-1;l>=65;l--){//print decreasing characters
            cout << char(l) ;
        }
        cout << "\n";
    }
    return 0;
}