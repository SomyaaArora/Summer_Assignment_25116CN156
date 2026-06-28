#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m;
    cin >> n;
    cout << "The multiplication table of " << n << " is\n";
    for (i=1;i<=10;i++)
    {
        m=n*i;
        cout << m <<"\n";
    }
    
    return 0;
}