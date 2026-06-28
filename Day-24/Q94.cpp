//To compress a string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,c,i; //initialising variables
    string s,cs;
    char ch;
    cout << "Enter the  string\n ";
    cin >> s;
    l=s.length();//Length of the string 
    cs="";
    c=1;
    for(i=0;i<l;) {
        c=0;
        ch=s[i];
        while(i<l&&s[i]==ch){
            c++;
            i++;
        }
    
        cs+=ch;
        cs+=to_string(c);
    }
    cout << "Compressed string " << cs;   
    return 0;  
}   
    