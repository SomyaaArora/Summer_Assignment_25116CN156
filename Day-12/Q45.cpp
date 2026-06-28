// To check pallindrome using function
#include<bits/stdc++.h>
using namespace std;
int pallindrome(int n)//function for pallindrome
{
    int r,rev=0,m;
    m=n;
    while(n!=0){
         r=n%10;
         rev=rev*10+r;
         n=n/10;
    }
    if(m==rev){
        cout << m <<" is pallindrome";
    }
    else{
         cout << m <<" is not pallindrome";

    }
}   
   
int main()
{
    int a; //initialising variables
    cout << "Enter the number to check pallindrome  \n ";
    cin >> a  ;
    pallindrome(a);
    return 0;     
}