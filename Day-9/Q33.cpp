// To print reverse star pattern 
#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int i,j;//initialising variables
    for(i=5;i>=1;i--)//outer loop
    {
        for (j=i;j>=1;j--)//inner loop
        {
            cout << "*";
        }
        cout << "\n";
    }
}

