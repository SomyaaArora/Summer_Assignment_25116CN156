// Selection sort
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,min,temp; //initialising variables
    cout << "Enter the size of an array \n ";
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){ //Input array elements of first array
        cin >> a[i];
    } 
    for(i=0;i<n-1;i++){//Selection sort techniques
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    cout << "Sorted array : ";
    for(i=0;i<n;i++){ //Array after sorting
        cout << a[i] << " ";
    } 
    return 0;    
}      