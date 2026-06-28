// To find maximum of two numbers using function
#include<bits/stdc++.h>
using namespace std;
int max(int a, int b)//function for maximum
{
    if(a>b)
        return a;
    else 
        return b;


}
int main()
{
    int a,b; //initialising variables
    cout << "Enter the numbers \n ";
    cin >> a >> b ;
    cout << "Maximum of two numbers is " << max(a,b); 
       
    return 0;     
}