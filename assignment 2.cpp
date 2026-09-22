#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    string course;
    int age;

public:
    
    void getDetails() {
        cout <<"Enter Roll Number: ";
        cin >> rollNo;

        cout <<"Enter Name: ";
        cin >> name;

        cout << "Enter Course: ";
        cin >> course;

        cout <<"Enter Age: ";
        cin >> age;
    }

   details
    void displayDetails() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << rollNo << endl;
       cout << "Name:" << name << endl;
    cout << "Course: " << course<<endl;
        cout << "Age:" << age << endl;
    }
};

int main() {
    Student s;

    s.getDetails();
    s.displayDetails();

    return 0;
}
