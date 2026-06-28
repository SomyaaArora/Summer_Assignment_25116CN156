// To convert lowercase to uppercase
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,v,c; //initialising variables
    string s;
    cout << "Enter the string\n ";
    getline(cin,s);
    v=0;
    c=0;
    
    for(i=0;i<s.length();i++){
        char ch= toupper(s[i]);
        cout << ch ;
    }    
    return 0;         
}