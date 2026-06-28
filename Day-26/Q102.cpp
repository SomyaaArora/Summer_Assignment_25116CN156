//To create voting eligiblity system
#include<bits/stdc++.h>
using namespace std;
int main()
{   cout << "--------Voting eligiblity system----------\n";
    int age; //initialising variables
    cout << "Enter your age \n";
    cin >>  age;
    if (age>18){
        cout <<  "You are eligible to vote \n";
    }
    else if(age >0){
        cout << "You are not elegible to vote \n";
        cout << "You can vote after "<< 18-age << "years\n";
    }
    else {
        cout << "Invalid age entered\n";
    }
    return 0;  
}
