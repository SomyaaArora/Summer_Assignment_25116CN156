// To print prime numbers upto a range
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,j; //initialising variables
    
    cin >> n;
    
     for(i=2;i<=n;i++)
    { 
        p=0;
        for(j=2;j<i;j++)
        {
            if (i%j==0)
            {
                p++;
            }

        }
         if (p==0){
             cout << i << " \n" ; 
        }
    }
    return 0; 
}