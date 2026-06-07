// To find factorial using recursion
#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    else {
        return n*factorial(n-1);//recrsive statement
    }
}
int main()
{
    int n;//initialising variables
    cout << "Enter the number \n";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n);
    return 0;
}

