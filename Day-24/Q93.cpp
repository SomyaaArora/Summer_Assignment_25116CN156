//To check string rotation
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l1,l2,j,c,i; //initialising variables
    string s1,s2,sr;
    cout << "Enter the first string\n ";
    cin >> s1;
    cout << "Enter the second string\n ";
    cin >> s2;
    l1=s1.length();//Length of the string 1
    l2=s2.length();//Length of the string 2
    if(l1!=l2){
        cout << "Not a rotation";
        return 0;
    }
    else {
        string temp = s1 + s1;

        if (temp.find(s2) != string::npos) {
            cout << "String is a rotation";
        }
        else{
            cout << "String is not a rotation";
        }
    }
    return 0;  
}   
    