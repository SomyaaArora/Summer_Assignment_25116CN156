// To find largest prime factor
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,j,l; //initialising variables
    cout << "Enter the number \n";
    cin >> n ; 
    // To find the factors of a number by checking if the number is divisible or not
    for(i=2;i<=n;i++){
        if (n%i==0){ //i is a factor of n
            p=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0){
                    p++;
                }
            }
            if (p==2){ // i is a prime 
                l=i;
            }
        }
    }
    cout << l << " is the largest prime number of " << n;  
    return 0; 
}