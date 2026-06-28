// To find common elements in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,i,j,k,l,p,f; //initialising variables
    cout << "Enter the size of first array \n ";
    cin >> n1;
    int a[n1];
    for(i=0;i<n1;i++){ //Input array elements of first array
        cin >> a[i];
    } 
    cout << "Enter the size of second array \n ";
    cin >> n2;
    int b[n2];
    for(j=0;j<n2;j++)//Input array elements of se
    {
        cin >> b[j];
    }  
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                cout << a[i] << " ";
                b[j]=-1;//To show that this element is already used
                break;
            }
        }
    }
    return 0;    
}      