//To merge two sorted arrays
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp,n1,n2,j,i,k; //initialising variables
    cout << "Enter size of first array \n ";
    cin >> n1;
    int a[n1];
    cout << "Enter elements in first array \n";
    for(i=0;i<n1;i++){//Input array elements in first array
        cin >> a[i];
    }
    cout << "Enter size of second array \n";
    cin >> n2;
    int b[n2];
    int m[n1+n2];
    cout << "Enter elements in second array\n";
    for(i=0;i<n2;i++){//Input array elements in second array
        cin >> b[i];
    }
    
    for(i=0;i<n1;i++){
        m[i]=a[i];

    }//Merging both arrays
    for(j=0;j<n2;j++){

        m[n2+j]=b[j];
    }
    for(i=0;i<(n1+n2)-1;i++){//Sorting array
        for(j=0;j<(n1+n2)-i-1;j++){
            if(m[j]>m[j+1]){
                temp=m[j];
                m[j]=m[j+1];
                m[j+1]=temp;
            }
        }
    }
    cout << "Sorted array is : ";
    for(k=0;k<n1+n2-1;k++){
        if(m[k]!=m[k-1])//To avoid reprinting
             cout << m[k] << " ";
    }
    return 0;  
}   
    