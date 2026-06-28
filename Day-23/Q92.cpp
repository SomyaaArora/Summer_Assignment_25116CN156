//To find maximum occuring character
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,j,m,c,i; //initialising variables
    string s;
    cout << "Enter the string\n ";
    getline(cin,s);
    l=s.length();//Length of the string
    char max=s[0];
    m=0;
    for(i=0;i<l;i++){
        c=0;
        for(j=0;j<l;j++){
            if(s[i]==s[j]){// To count the frequency of the charcater
                c++;
            } 
            }
             if(c>m){
                max=s[i];
                m=c;
            }  
        }        
    cout << "Maximum occuring character is : " << max << "\n" << "Frequency of the character is : " << m;
    return 0;  
}         