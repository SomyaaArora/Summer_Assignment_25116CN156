// To check a number is pallindrome or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m,rev,r; //initialising variables
    
    cin >> n;
    m=n;
    rev=0;
     while(n!=0)
    { 
        r=n%10;
        rev=rev*10+r;
        n=n/10;

    }
    if (rev==m){
        cout << m << " is pallindrome" ;
    }
    else{
        cout << m << " is not pallindrome" ;
    }
    return 0; 
}