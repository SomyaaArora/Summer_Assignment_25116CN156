// To count even and odd elementin an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,o,e; //initialising variables
    cout << "Enter the size of an array   \n ";
    cin >> n  ;
    int a[n];
    for(j=0;j<n;j++){ //Input array elements
        cin >> a[j];
    }
    o=0;
    e=0;
    for(i=0;i<n;i++){ //to check element is even or odd
        if (a[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }   
        cout << "Odd number in an array is " << o << "\n Even number in  an array is " << e;

      return 0;   
}  
