//To find character frequency 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i,j,c; //initialising variables
    string s;
    cout << "Enter the string\n ";
    getline(cin,s);
    l=s.length();//Length of the string
    for(i=0;i<l;i++){
        c=1;
        if(s[i]=='\0')
        {
            continue;
        }
        for(j=i+1;j<l;j++)
        {
            if(s[i]==s[j]){
                c++;
                s[j]='\0';
            }
        }
        cout << s[i] << ":" << c << "\n";
    }
    return 0;       
}