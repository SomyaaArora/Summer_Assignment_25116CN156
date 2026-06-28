// Second largest element in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,s,l; //initialising variables
    cout << "Enter the size of an array   \n ";
    cin >> n ;
    int a[n];
    for(j=0;j<n;j++){ //Input array elements
        cin >> a[j];
    }
    s=a[0];
    l=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>l)
        {
            s=l;
            l=a[i];
        }
        else if (a[i]>s && a[i]!=l){
            s=a[i];
        }
    }
    cout << "Second largest element " << s;
    return 0;   
}  
