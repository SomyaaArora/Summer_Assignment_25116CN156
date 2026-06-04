// To generate Fibonacci series
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c; //initialising variables
    a=0;
    b=1;
    cout << a << "\n" << b << "\n";
    while(true)
    {
        c=a+b;
        a=b;
        b=c;
        cout << c << "\n";
        
    }
       
    return 0; 
}