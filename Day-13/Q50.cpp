// To find sum and average of an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j; //initialising variables
    cout << "Enter the size of an array   \n ";
    cin >> n  ;
    int a[n];
    for(i=0;i<n;i++){ //Input array elements
        cin >> a[i];
    }
    int s=0;
    for(j=0;j<n;j++){ //add elements of an array
        s=s+a[j];
    }
    double avg;
    avg= (double) s/n;
    cout << "Sum of an array is " << s << " Average of an array is " << avg ;

    return 0;     
}