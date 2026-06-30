//To create mini library system
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    cout << "Enter size of an array\n";
    int n,i;
    cin >> n;
    int total=0,ch;
    string book[n],search;
    do
    {   
        cout << "----MINI LIBRARY SYSTEM ----\n";
        cout << "1.Add Book\n2.Display Books \n 3.Search Book\n 4.Exit\n";
        cout << "Enter your choice\n";
        cin >> ch;
        cin.ignore();
               
        switch(ch)
        {
            case 1:
            if(total<20){
                cout <<"Enter Book Name:";
                getline(cin,book[total]);
                total++;
                cout << "Book Added Successfully!\n";
            }
            else{
            cout << "Library is Full!\n";
            }
            break;
            case 2:
            if(total==0)
            {
                cout << "No books Available!\n";
            }
            else{
                cout << "Books in Library:\n";
                for(i=0;i<total;i++){
                    cout << i+1 << "." << book[i] << "\n" ;
                }
            }
            break;
            case 3:
            int f=0;
            cout << "Enter book Name to search!\n";
            getline(cin,search);
            for(i=0;i<total;i++){
                if(book[i]==search){
                    cout << "Book found at position " << i+1 << "\n";
                    f=1;
                    break;
                }
            }
            if(f==0){
                cout << "Book not found!\n";
            }
            break;
            case 4:
            cout << "Thank You!\n";
            break;
            default :
            cout << "Invalid choice!\n";
        }
        /* code */
        
    } while (ch!=4);
    
    return 0;  
}