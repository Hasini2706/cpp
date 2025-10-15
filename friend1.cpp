#include<bits/stdc++.h>
using namespace std;
class Student;
class Teacher{
 public:
 void evaluate(Student s);
};
class Student {
    private:
    int marks=95;
    public:
    string student_name;
    int student_id;
  friend class Teacher;
  friend void Teacher::evaluate(Student s);
};
void Teacher::evaluate(Student s) {
    cout<<"student marks: "<<s.marks<<endl;
}
int main() {
Student s;
Teacher t1;
s.student_name="Hasini";
s.student_id=1;
cout<<"student name: "<<s.student_name<<endl;
cout<<"student id: "<<s.student_id<<endl;
t1.evaluate(s);
return 0;
}

