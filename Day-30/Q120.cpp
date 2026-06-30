//Mini project using arrays and strings
//Student Management System
#include <iostream>
using namespace std;

const int n = 100;

int roll[n], total = 0;
string name[n];
float marks[n];

void addStudent() {//Function to add student
    cout << "\nEnter Roll No: ";
    cin >> roll[total];
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[total]);

    cout << "Enter Marks: ";
    cin >> marks[total];

    total++;
    cout << "Student Added Successfully!\n";
}

void displayStudents() {//To display student
    if (total == 0) {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\nRoll\tName\t\tMarks\n";
    for (int i = 0; i < total; i++) {
        cout << roll[i] << "\t" << name[i] << "\t\t" << marks[i] << endl;
    }
}

void searchStudent() {//To search student
    int r;
    int f = 0;

    cout << "\nEnter Roll No. to Search: ";
    cin >> r;

    for (int i = 0; i < total; i++) {
        if (roll[i] == r) {
            cout << "\nStudent Found\n";
            cout << "Roll No: " << roll[i] << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Marks: " << marks[i] << endl;
            f = 1;
            break;
        }
    }

    if (f==0)
        cout << "Student Not Found!\n";
}

int main() {
    int ch;

    do {
        cout << "\n===== STUDENT RECORD SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                cout << "Thank You!\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }

    } while (ch!= 4);

    return 0;
}