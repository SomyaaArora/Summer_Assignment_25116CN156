// To print factors of a number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i; //initialising variables
    cout << "Enter the number \n";
    cin >> n ; 
    // To find the factors of a number by checking if the number is divisible or not
    for(i=1;i<=n;i++){
        if (n%i==0){
            cout << i << "\n";
        }
    }
       
    return 0;     
}