//To sort names alphabetically
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j; //initialising variables
    cout << "Enter the number of names\n";
    cin >> n;
    string s[n];
    string temp;
    cout << "Enter " << n << " names\n";
    for(i=0;i<n;i++){
        cin >> (s[i]);
    }//To sort alphabetically
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(s[j]>s[j+1]){
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    cout << "Names in alphabetical order are : \n";
    for(i=0;i<n;i++){
        cout << s[i] << "\n";
    }

    
    return 0;  
}   
    