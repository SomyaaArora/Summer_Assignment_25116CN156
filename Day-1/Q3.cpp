#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,f;
    cin >> n;
    f=1;
    for (i=1;i<=n;i++)
    {
        f=f*i;
      
    }
      cout << "Factorial of n=" << f ;
    
    return 0;
}