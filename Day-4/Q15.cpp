// To check armstrong number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c,s,m,n,b; //initialising variables
    cin >> n;
    m=n;
    b=n;
    c=0;
    s=0;
    //count number of digits
    while(n!=0){
         c++;
         n=n/10; 
    }
    //sum of digits raised to the power of digits
    while(m!=0){

        a=m%10;
        s+=(int)pow(a,c);
        m=m/10;

    }
    if(s==b){
        cout << b << " is armstrong number";
        }
    else {
        cout << b << " is not armstrong number";
    }      
    return 0; 
}