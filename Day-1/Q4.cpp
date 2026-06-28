#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin >> n;
    c=0;
    while(n!=0)
    {  
        c++;
        n=n/10;
      
    }
      cout << "Number of digits is=" << c ;
    
    return 0;
}