// To print armstrong number upto a range
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,s,c,m,n; //initialising variables
    cout << "Enter the range of the numbers";
    cin >> a >> b;
    for(i=a;i<=b;i++){ 
        s=0;
        c=0;
        m=i; 
        n=i;
        //count digits
         while(i!=0){

            c++;
            n=n/10; 
         } 
         //sum of digits raised to the power of digits
         while(m!=0){

            a=m%10;
            s+=(int)pow(a,c);
            m=m/10;

        }

         if(s==n){

             cout << n << "\n";

        }
    }     
    return 0; 
}