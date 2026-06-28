//To find common characters in the string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,f,j,i,k,p; //initialising variables
    string s;
    cout << "Enter the string\n ";
    getline(cin,s);
    l=s.length();//Length of the string
    for(i=0;i<l;i++){
        f=0;
        for(j=i;j<l;j++)
        {
            if(s[i]==s[j]){//To check how many times character occur
                f++;
            }
        }
        p=0;//To prevent reprinting
        for(k=0;k<i;k++){
            if(s[i]==s[k]){
                p=1;
                break;
            }
        }

        if(f>1&&p==0){//To print common characters
            cout << s[i] << " ";
            p=1;
        }
       
    }
    return 0;  
}   
    