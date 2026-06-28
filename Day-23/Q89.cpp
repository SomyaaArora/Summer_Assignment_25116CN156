//To find first non repeating character
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,j,c,i; //initialising variables
    string s;
    cout << "Enter the string\n ";
    getline(cin,s);
    l=s.length();//Length of the string
    for(i=0;i<l;i++){
        c=0;
        for(j=0;j<l;j++){
            if(s[i]==s[j]){// To count the frequency of the charcater
                c++;
            }
                
        }
        if(c == 1){
            cout << "First non  repeating  character is " << s[i];
            break;
        }   
    }
    
    return 0;  
}         