//To remove duplicate characters
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,f,j,i; //initialising variables
    string s,r;
    char ch;
    cout << "Enter the string\n ";
    getline(cin,s);
    l=s.length();//Length of the string
    for(i=0;i<l;i++){
        f=0;
        for(j=0;j<r.length();j++){
            if(s[i]==r[j]){//To check the existence of the character
                f=1;
                break;
            }
        }
        if(f==0){
            r+=s[i];
        }
    }
    cout << "String after removing duplicates : " << r;
    return 0;  
}   
    