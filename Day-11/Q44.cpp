// To find factorial using function
#include<bits/stdc++.h>
using namespace std;
int fact(int n)//function for factorial
{
   int f=1,i;
   for(i=1;i<=n;i++)
   {
    f=f*i; 
   }
   return f;
}
int main()
{
    int a; //initialising variables
    cout << "Enter the number to find the factorial of \n ";
    cin >> a  ;
    cout << "Factorial of " << a << " is " << fact(a); 
       
    return 0;     
}