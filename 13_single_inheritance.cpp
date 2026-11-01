#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void inputPerson()
    {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
    }
};

class Student : public Person
{
private:
    float marks;

public:
    void input()
    {
        inputPerson();

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
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
