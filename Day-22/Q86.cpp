// To count words in the sentence
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i,c; //initialising variables
    string s,a;
    c=0;
    cout << "Enter the string\n ";
    getline(cin,s);
    l=s.length();//Length of the string
    for(i=0;i<l;i++){
        a=s[i];
        if(a!=" "){
            c++;//count number of words
        }
    }
    cout << "Words in the sentence are " << c;
    return 0;       
}