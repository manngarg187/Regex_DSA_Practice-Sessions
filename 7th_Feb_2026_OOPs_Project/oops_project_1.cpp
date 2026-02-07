#include <iostream>
#include <vector>
using namespace std;

/* Base Class (Abstraction) */
class Person {
protected:
    string name;
    int age;

public:
    virtual void input() = 0;   // Pure virtual function
    virtual void display() = 0;
};

/* Derived Class (Inheritance) */
class Student : public Person {
private:
    int roll;
    float marks;

public:
    // Input data
    void input() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Display data (Polymorphism)
    void display() {
        cout << "\n---------------------";
        cout << "\nName   : " << name;
        cout << "\nAge    : " << age;
        cout << "\nRoll   : " << roll;
        cout << "\nMarks  : " << marks;
        cout << "\n---------------------\n";
    }

    int getRoll() {
        return roll;
    }
};

/* Manager Class */
class StudentManager {
private:
    vector<Student> students;

public:
    void addStudent() {
        Student s;
        s.input();
        students.push_back(s);

        cout << "\nStudent Added Successfully!\n";
    }

    void viewAll() {
        if (students.empty()) {
            cout << "\nNo Records Found!\n";
            return;
        }

        for (int i = 0; i < students.size(); i++) {
            students[i].display();
        }
    }

    void searchStudent() {
        int r;
        cout << "Enter Roll No to Search: ";
        cin >> r;

        for (int i = 0; i < students.size(); i++) {
            if (students[i].getRoll() == r) {
                cout << "\nStudent Found:\n";
                students[i].display();
                return;
            }
        }

        cout << "\nStudent Not Found!\n";
    }

    void deleteStudent() {
        int r;
        cout << "Enter Roll No to Delete: ";
        cin >> r;

        for (int i = 0; i < students.size(); i++) {
            if (students[i].getRoll() == r) {
                students.erase(students.begin() + i);
                cout << "\nStudent Deleted!\n";
                return;
            }
        }

        cout << "\nStudent Not Found!\n";
    }
};

/* Main Function */
int main() {
    StudentManager sm;
    int choice;

    do {
        cout << "\n===== Student Management System =====";
        cout << "\n1. Add Student";
        cout << "\n2. View All Students";
        cout << "\n3. Search Student";
        cout << "\n4. Delete Student";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            sm.addStudent();
            break;

        case 2:
            sm.viewAll();
            break;

        case 3:
            sm.searchStudent();
            break;

        case 4:
            sm.deleteStudent();
            break;

        case 5:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}