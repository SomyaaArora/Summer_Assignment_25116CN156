// To check armstrong number using function
#include<bits/stdc++.h>
using namespace std;
void armstrong(int n)//function for armstrong
{
    int a,c,s,m,b; //initialising variables
    m=n;
    b=n;
    c=0;
    s=0;
    //count number of digits
    while(m!=0){
         c++;
         m=m/10; 
    }
    //sum of digits raised to the power of digits
    while(b!=0){

        a=b%10;
        s+=(int)pow(a,c);
        b=b/10;

    }
    if(s==n){
        cout << n << " is armstrong number";
        }
    else {
        cout << n << " is not armstrong number";
    }      
}
   
int main()
{
    int a; //initialising variables
    cout << "Enter the number to check armstrong  \n ";
    cin >> a  ;
    armstrong(a);
    return 0;     
}