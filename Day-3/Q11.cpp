// GCD of two number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,m,gcd,i; //initialising variables
    cout << "Enter two numbers ";
    cin >> a >> b;
    m=min(a,b);
     for(i=1;i<=m;i++){
        if (a%i==0 && b%i==0){
            gcd=i;
        }

     }
    cout << gcd << " is the gcd of " << a << " and "<< b;
       
    return 0; 
}