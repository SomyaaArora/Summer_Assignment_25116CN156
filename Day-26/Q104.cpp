//To create Quiz application
#include<bits/stdc++.h>
using namespace std;
int main()
{   cout << "--------QUIZ APPLICATION----------\n";
    int score=0,ans; //initialising variables
    cout << "Q1: What is the capital of India?\n";
    cout << "1.Mumbai\n2.Delhi\n3.Chennai\n4.Kolkata\n";
    cin >> ans;
    if (ans==2){
        score++;
    }
    cout << "Q2:How many days are there in a week\n";
    cout << "1.4\n2.8\n3.3\n4.7\n";
    cin >> ans ;
    if(ans==4)
    {
        score++;
    }
    cout << "Q3:Who is the prime minister of india\n";
    cout << "1.Narendra Modi\n2.Rajnath Singh\n3.Amit Shah\n4.Yogi Adityanath\n";
    cin >> ans ;
    if(ans==1){
        score ++;
    }
    cout << "Your Score = " << score <<"\n";
    return 0;  
}
