// To print repeated number pattern
#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int i,j;//initialising variables
    for(i=1;i<=5;i++)//outer loop
    {
        for (j=1;j<=i;j++)//inner loop
        {
            cout << i ;
        }
        cout << "\n";
    }
}

