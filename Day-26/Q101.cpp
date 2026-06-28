//To create number guessing game
#include<bits/stdc++.h>
using namespace std;
int main()
{   cout << "--------Number guessing game----------\n";
    srand(time(0)); //seed value for random number
    int n,g; //initialising variables
    cout << "Choose a number between 1-100 \n";
    n=rand()%100+1;//random number between 1 and 100
    do
    { /* code */
        cout << "Enter the guess \n";
        cin >> g;
        if(g>n){
            cout << "Too high! Try again\n";
        }
        else if(g<n){
            cout << "Too low! Try again\n";
        }
        else{
            cout << "Congratulations you guessed the correct number\n";
        }
 
    } while (g!=n);
    return 0;  
}
