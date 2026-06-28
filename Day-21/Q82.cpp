// To reverse the string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i; //initialising variables
    string s;
    l=0;
    cout << "Enter the string\n ";
    getline(cin,s);
    while (s[l]!='\0'){//Length of the string
        l++;
    }
    for(i=l-1;i>=0;i--){
        cout << s[i];
    }

    return 0;         
}