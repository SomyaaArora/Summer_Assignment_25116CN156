// To check a number is prime or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p; //initialising variables
    
    cin >> n;
    p=0;
     for(i=2;i<n;i++)
    { 
        if(n%i==0){
            p=p+1;
        }
    }
    if (p==0){
        cout << n << " is a prime number" ;
    }
    else{
        cout << n << " is not a prime number" ;
    }
    return 0; 
}