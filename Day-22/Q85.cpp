// To check pallindrome of the string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i; //initialising variables
    string s,a;
    char ch;
    l=0;
    cout << "Enter the string\n ";
    getline(cin,s);
    l=s.length();//Length of the string
    for(i=l-1;i>=0;i--){
        s[i]=toupper(s[i]);
        a=a+s[i];
    }

    if (a==s)
        cout << "String is pallindrome";
    else
       cout << "String is not pallindrome";

    return 0;       
}