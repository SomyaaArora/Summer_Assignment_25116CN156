// To find sum of digits usimg recursion
#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    return (n%10)+sum(n/10);//recursive statement
} 
int main(){ 
    int n,i;//initialising variables
    cout << "Enter the number  \n";
    cin >> n;  
    cout << "Sum of digits is " << sum(n);

    return 0;
}

