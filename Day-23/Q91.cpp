//To check anagram strings
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l1,l2,j,c,i; //initialising variables
    string s1,s2;
    cout << "Enter the first string\n ";
    getline(cin,s1);
    cout << "Enter the second string\n ";
    getline(cin,s2);
    l1=s1.length();//Length of the string 1
    l2=s2.length();//Length of the string 2
    if(l1!=l2){
        cout << "Strings are not anagram";
        return 0;
    }
    else{
        for(i=0;i<l1;i++){
            c=0;
            for(j=0;j<l2;j++){
                if(s1[i]==s2[j]){
                    s2[j] = '*';
                    c=1;
                    break;
                }
            }
            if(c==0){
                cout << "Strings are not anagrams";
                return 0;
            }
        }
        cout << "Strings are anagrams";
         
    }
    
    return 0;  
}         