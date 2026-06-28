// To print the product of the digits of a number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m,p,a; //initialising variables
    
    cin >> n;
    m=n;
    p=1;
     while(n!=0)
    { 
        a=n%10;
        p=p*a;
        n=n/10;

    }
    cout << "Product of digits of  " << m <<  " is " << p;
    return 0; 
}