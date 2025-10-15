#include<bits/stdc++.h>
using namespace std;
class Person() {
    public:
    string name;
    int age;
    void introduce() {
        cout << "My name is " << name << " and I am " << age << " years old." << endl;
    }
};
class Student : public Person {
    public:
    int rollno;
    void study() {
        cout<<name<<" is studying.roll no is "<<rollno<<endl;
    }
};
class Teacher : public Person {
    public:
    string subject;
    void teach() {
        cout<<name<<" is teaching "<<subject<<endl;
    }
};
class TeachingAssistant: public Student,public Teacher{
    public:
    string researchArea;
    void assist() {
        cout<<name<<" is assisting in "<<subject<<" and researching in "<<researchArea<<endl;
    }
};
int main() {
    TeachingAssistant ta;
    ta.Student::name = "Alice";
    ta.Student::age = 25;
    ta.Student::rollno = 101;
    ta.subject = "Mathematics";
    ta.researchArea = "Algebra";

    ta.introduce();
    ta.study();
    ta.teach();
    ta.assist();

    return 0;
}