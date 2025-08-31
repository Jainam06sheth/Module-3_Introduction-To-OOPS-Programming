#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    // Constructor to initialize name and age
    Person(string n, int a) : name(n), age(a) 
	{
	}

    // Virtual function to display person info
    virtual void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    string studentId;
public:
    // Constructor to initialize Student-specific attributes
    Student(string n, int a, string Id) : Person(n, a), studentId(Id) 
	{
	}

    // Overriding displayInfo to include Student ID
    void displayInfo() override {
        Person:displayInfo();  // Call base class displayInfo
        cout << "Student ID: " << studentId << endl;
    }
};

class Teacher : public Person {
private:
    string subject;
public:
    // Constructor to initialize Teacher-specific attributes
    Teacher(string n, int a, string sub) : Person(n, a), subject(sub) 
	{
	}

    // Overriding displayInfo to include Subject
    void displayInfo() override {
        Person::displayInfo();  // Call base class displayInfo
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Creating objects for Student and Teacher
    Student s1("John Doe", 20, "2404030400243");
    Teacher t1("Dr. Smith", 45, "Computer Science");

    // Display student info
    cout << "Student Information:" << endl;
    s1.displayInfo();

    cout << "\nTeacher Information:" << endl;
    t1.displayInfo();

    return 0;
}

