// To find length of string without strlen()
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l; //initialising variables
    string s;
    l=0;
    cout << "Enter the string\n ";
    getline(cin,s);
    while (s[l]!='\0'){//to check whether the string is null
        l++;
    }
    cout << "Length of string is = " << l ;

    return 0;         
}