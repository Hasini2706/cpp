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