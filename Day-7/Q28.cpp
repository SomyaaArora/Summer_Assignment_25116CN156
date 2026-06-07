// To find reverse of a number usimg recursion
#include<bits/stdc++.h>
using namespace std;
int rev=0;
int reverse(int n)
{
    if (n==0)
    {
        return rev;
    }
    rev=rev*10 + n%10;//reverse statement

    return reverse(n/10);//recursive statement
} 
int main(){ 
    int n,i;//initialising variables
    cout << "Enter the number to be reverse \n";
    cin >> n;  
    cout << "Reverse of a number is " << reverse(n);

    return 0;
}

