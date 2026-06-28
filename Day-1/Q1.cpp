#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,s; //initialising variables
    
    cin >> n;
    s=0;
    for (i=1;i<=n;i++)
    {
        s=s+i;

    }
    cout << "Sum of n natural number are:" << s;
    return 0; 
}