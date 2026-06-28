//To sort words by length 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j; //initialising variables
    cout << "Enter the number of words\n";
    cin >> n;
    string s[n];
    string temp;
    cout << "Enter " << n << " words\n";
    for(i=0;i<n;i++){
        cin >> (s[i]);
    }//To sort by length
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(s[j].length()>s[j+1].length()){
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    cout << "Words by length  are : \n";
    for(i=0;i<n;i++){
        cout << s[i] << "\n";
    }
    return 0;  
}   
    