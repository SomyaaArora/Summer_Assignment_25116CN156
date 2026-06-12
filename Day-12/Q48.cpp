// To check perfect number using function
#include<bits/stdc++.h>
using namespace std;
void perfect(int n)//function for perfect number
{
    int i,c=0;
    for (i=1;i<n;i++){
        if(n%i==0)
        {
            c=c+i;
        }
    }
    if(c==n){
        cout << n << " is a perfect number ";
    }
    else {
        cout << n << " is not a perfect number ";
    }

}
   
int main()
{
    int n; //initialising variables
    cout << "Enter the number  \n ";
    cin >> n  ;
    perfect(n);
    return 0;     
}