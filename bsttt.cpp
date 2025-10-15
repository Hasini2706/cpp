#ifndef MYSTACK_H
#define MYSTACK_H

#include <iostream>
#include <stack>
using namespace std;

class MyStack {
private:
    stack<int> s;

public:
    void push(int value);
    void pop();
    void display();
};

#endif

#include "mystack.h"

void MyStack::push(int value) {
    s.push(value);
    cout << value << " pushed into the stack." << endl;
}

void MyStack::pop() {
    if (s.empty()) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << s.top() << " popped from the stack." << endl;
        s.pop();
    }
}

void MyStack::display() {
    stack<int> temp = s;
    cout << "Stack elements (top to bottom): ";
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}
#include "mystack.h"

int main() {
    MyStack ms;
    ms.push(10);
    ms.push(20);
    ms.push(30);
    ms.display();

    ms.pop();
    ms.display();

    return 0;
}