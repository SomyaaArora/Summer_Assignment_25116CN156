// To generate  nth term of Fibonacci series
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,n; //initialising variables
    cin >> n;
    a=0;
    b=1;
    for(i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;  
    }
     cout << c << "\n";
       
    return 0; 
}