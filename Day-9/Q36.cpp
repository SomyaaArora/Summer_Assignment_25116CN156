// To print hollow square pattern
#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int i,j;//initialising variables
    for(i=1;i<=5;i++)//outer loop
    {
        for (j=1;j<=5;j++)//inner loop
        { 
            if(j==1 || j==5 || i==1 || i==5){
                cout << "*";
            }
            else {
                cout << " ";
            }
            
        }
        cout << "\n";
    }
}

