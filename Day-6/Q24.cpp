// To find x^n without pow
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,p; //initialising variables
    cout << "Enter the number \n ";
    cin >> x ;
    cout << "Enter the power \n ";
    cin >> n ;
    p=1;
    for(i=1;i<=n;i++){
        p=p*x;//multiplying upto the power
    }
     cout << x << "^" << n << " is " << p ;
    return 0;    
}