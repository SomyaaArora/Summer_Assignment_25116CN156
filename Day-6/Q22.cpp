// To convert binary to decimal
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,m,s,c; //initialising variables
    cout << "Enter the binary number \n ";
    cin >> n ;
    s=0;
    c=0; 
    m=n;
    while(n!=0){
       r=n%10;
       if(r==0 || r==1)//to check the number is binary or not
       {
        s=s+(r*pow(2,c));
        c++;
        n=n/10;
     } 
       
       else {
        cout << "Wrong input";
        break;
       }
       

    }
       
    cout << "Decimal of " << m <<" is " << s; 
    return 0;    
}