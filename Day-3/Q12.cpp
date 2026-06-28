// LCM of two number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,lcm; //initialising variables
    cout << "Enter two numbers ";
    cin >> a >> b;
    lcm=max(a,b);
    while(true)
    {
        if (lcm%a==0 && lcm%b==0)
        {
            break;
          
        }
        else{
            lcm++;
        }
    }
    cout << lcm << " is the lcm of " << a << " and "<< b;
       
    return 0; 
}