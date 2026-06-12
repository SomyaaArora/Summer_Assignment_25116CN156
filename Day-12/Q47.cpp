// fibonacci series using function
#include<bits/stdc++.h>
using namespace std;
void fib(int n)//function for fibonacci series
{
    int a,b,c,i;
    a=0;
    b=1;
    cout << a << "\n";
    cout << b << "\n";
    for(i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout << c << "\n";
    }

}
   
int main()
{
    int n; //initialising variables
    cout << "Enter the number of terms \n ";
    cin >> n  ;
    fib(n);
    return 0;     
}