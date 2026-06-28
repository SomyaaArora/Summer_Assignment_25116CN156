// To count set bits in a number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,m,b,p,c; //initialising variables
    cout << "Enter the decimal number \n ";
    cin >> n ;
    m=n;
    p=1;
    b=0;
    c=0;
    while(n!=0){
        r=n%2;//taking remainder
        if(r==1){
            c++; //counting bits
        }

        b=b+(r*p); 
        p=p*10;
        n=n/2;

    }
       
    cout << "Binary of " << m <<" is " << b << " and set of bits is " << c ; 
    return 0;    
}