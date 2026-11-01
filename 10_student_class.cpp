#include <iostream>
using namespace std;

// Class Student
class Student
{
    string name;
    int roll_no;
    float marks;

public:

    // Function to input student details
    void input()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll_no;

        cout << "Enter marks: ";
        cin >> marks;
    }

    // Function to display student details
    void display()
    {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}
