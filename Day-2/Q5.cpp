// To print the sum of the digits of a number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m,s,a; //initialising variables
    
    cin >> n;
    m=n;
    s=0;
     while(n!=0)
    { 
        a=n%10;
        s=s+a;
        n=n/10;

    }
    cout << "Sum of digits of " << m <<  " is " << s;
    return 0; 
}