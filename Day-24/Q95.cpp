//To find longest word
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i; //initialising variables
    string s,lg,w;
    char ch;
    cout << "Enter the sentence\n ";
    getline(cin,s);
    l=s.length();//Length of the string
    lg="";
    w=""; 
    for(i=0;i<=l;i++){
        if(i==l||s[i]==' '){
            if(w.length()>lg.length()){//Comparing the word with the longest word
                lg=w;
            }
            w="";
        }
        else{
            w=w+s[i];//Adding letters till space
        }    
    }         
    cout << "Longest word is " << lg;
    return 0;  
}   
    