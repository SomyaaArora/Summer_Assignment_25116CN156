//To remove spaces from the sentence
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i; //initialising variables
    string s,r;
    cout << "Enter the string\n ";
    getline(cin,s);
    l=s.length();//Length of the string
    for(i=0;i<l;i++){
        if(s[i]!=' ')//To check space
        {
            r=r+s[i];
        }
    }
        cout << "String without spaces: " << r;
    
    return 0;       
}