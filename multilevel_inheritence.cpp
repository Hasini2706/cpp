#include <bits/stdc++.h>
using namespace std;

class person {
protected:   // so derived classes can use
    string name;
    int age;

public:
    // constructor must be public
    person(string n, int a) {
        name = n;
        age = a;
        cout << "person constructor called" << endl;
    }
};

class student : public person {
public:
    int rollno;

    // constructor calls person's constructor 
    student(string n, int a, int r) : person(n, a) {
        rollno = r;   // fixed typo
        cout << "student constructor called " << endl;
    }
};

class GradStudent : public student {   // fixed  student
public:
    string researchArea;

    // Constructor calls student's constructor
    GradStudent(string n, int a, int r, string ra) : student(n, a, r) {
        researchArea = ra;
        cout << "GradStudent constructor called" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Research Area: " << researchArea << endl;
    }
};

int main() {
    GradStudent gs("swarna", 21, 101, "Artificial Intelligence");
    gs.display();
    return 0;
}