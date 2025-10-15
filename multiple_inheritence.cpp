//multiple inheritance
#include<bits/stdc++.h>
using namespace std;
class Student{   //parent class
    public:
    string name;
    int rollno;
    Student(string n,int r) {            //parent class constructor
        name=n;
        rollno=r;
    }
    void showStudent() {   //member function
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;   
    }
};
class Teacher{            //parent class
    public:
    string subject;
    Teacher(string sub) {      //parent class constructor
        subject=sub;
    }
    void showTeacher() {
        cout<<"Subject: "<<subject<<endl;    //member function
    }
};

class TeachingAssistant: public Student, public Teacher {   //derived class
    public:
    string research_area;
    TeachingAssistant(string n,int r,string sub,string res):Student(n,r),Teacher(sub) {   //derived class constructor
        research_area=res;
    }
    void showTA() {        //member function
        cout<<"Teaching Assistant Details:"<<endl;
        showStudent();
        showTeacher();         //member function of parent class
        cout<<"Research Area:"<<research_area<<endl;
    }
};
int main() {
    TeachingAssistant ta("Hasini",223,"Maths","AI");   //object of derived class
    ta.showTA();  //member function of derived class
    return 0;
}