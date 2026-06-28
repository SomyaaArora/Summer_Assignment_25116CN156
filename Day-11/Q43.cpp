// To check prime using function
#include<bits/stdc++.h>
using namespace std;
int prime(int n)//function for prime 
{
   int i,c=0;
   for(i=2;i<n;i++)
   {
    if (n%i==0){
        c++;
    }     
   }
   if (c==0)
      cout << n << " is prime";
   else 
       cout << n << " is not prime";
}
int main()
{
    int a; //initialising variables
    cout << "Enter the number to check prime or not \n ";
    cin >> a  ;
    prime(a); 
       
    return 0;     
}