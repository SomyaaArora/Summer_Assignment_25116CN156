// To check the number is strong or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,f,m,a,s; //initialising variables
    cout << "Enter the number to be checked ";
    cin >> n ;
    s=0;
    m=n;
    while(n!=0){
        a=n%10;
        f=1;
        //to find the factorial of a number
        for(i=1;i<=a;i++){
            f=f*i;
        }
        //to add the factorial
        s=s+f;
        n=n/10;

    }
       
    if (s==m){
        cout << m << " is a strong number";
    }
    else{
        cout << m << " is not a strong number";
    }
       
     return 0;     
}