// To convert decimal to binary
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,m,b,p; //initialising variables
    cout << "Enter the decimal number \n ";
    cin >> n ;
    m=n;
    p=1;
    b=0;
    while(n!=0){
        r=n%2;//taking remainder
        b=b+(r*p); 
        p=p*10;
        n=n/2;

    }
       
    cout << "Binary of " << m <<" is " << b; 
    return 0;    
}