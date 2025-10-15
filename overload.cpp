#include<bits/stdc++.h>
using namespace std;

class marks{
    int intmarks;
    int extmarks;
    public:
    marks() {
        intmarks=0;
        extmarks=0;
    } 
    marks(int a,int b) {
        intmarks=a;
        extmarks=b;
    } 
    marks operator+(marks m) {
        marks temp;
        temp.intmarks=intmarks+m.intmarks;
        temp.extmarks=extmarks+m.extmarks;
        return temp;
    }
    void display() {
        cout<<"Internal marks: "<<intmarks<<endl;
        cout<<"External marks: "<<extmarks<<endl;
    }
   
};
int main() {
    marks m1(20,30),m2(25,35),m3;
    m3=m1+m2;
    m3.display();
    return 0;
}