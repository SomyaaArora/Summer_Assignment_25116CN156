// To print repeated character pattern
#include<bits/stdc++.h>
using namespace std;
int main(){ 
    char i,j;//initialising variables
    for(i='A';i<='E';i++)//outer loop
    {
        for (j='A';j<=i;j++)//inner loop
        {
            cout << i ;
        }
        cout << "\n";
    }
}

