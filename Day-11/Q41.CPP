// To find sum of two numbers using function
#include<bits/stdc++.h>
using namespace std;
int sum(int a, int b)//function for sum
{
    int s=0;
    s=a+b;
    return s;

}
int main()
{
    int a,b; //initialising variables
    cout << "Enter the numbers to be add\n ";
    cin >> a >> b ;
    cout << "Sum of two numbers is " << sum(a,b); 
       
    return 0;     
}