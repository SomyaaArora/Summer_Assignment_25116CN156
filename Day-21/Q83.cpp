// To count vowels and consonants
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
        char ch= tolower(s[i]);
        if(ch>='a'&&ch<='z'){//To check it is alphabet or not
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                v++;
            }
            else{
                c++;
            }
        }
    }
    cout << "Number of consonants = " << c << "\n";
    cout << "Number of vowels = " << v << "\n";

    return 0;         
}