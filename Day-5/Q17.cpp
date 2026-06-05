// To check the number is perfect or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,s; //initialising variables
    cout << "Enter the number to be checked ";
    cin >> n ;
    s=0;
    for(i=1;i<n;i++){
        if(n%i==0)
        {
            s=s+i;
        }

    }
    if (s==n){
        cout << n << " is a perfect number";
    }
    else{
        cout << n << " is not a perfect number";
    }
       
    return 0;  
}