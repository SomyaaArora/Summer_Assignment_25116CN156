// Bubble sort in descending order
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,temp; //initialising variables
    cout << "Enter the size of an array \n ";
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){ //Input array elements of first array
        cin >> a[i];
    } 
    for(i=0;i<n-1;i++){//Bubble sort techniques
        for(j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){ 
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
            
        }
    }
    cout << "Sorted array : ";
    for(i=0;i<n;i++){ //Array after sorting
        cout << a[i] << " ";
    } 
    return 0;    
}      